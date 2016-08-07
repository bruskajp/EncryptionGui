#include "columnarTransCipher.h"

#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int ColumnarTransCipher::encrypt(const string & plaintext,string & ciphertext,const string & keyword){
    if (!plaintext.compare("")) {
        return 1;
    }

    string plainTemp = plaintext;

    // Add noise to end of plaintext
    if (plainTemp.length() % keyword.length() != 0) {
        srand(time(0));
        int noise_count = keyword.length() - (plainTemp.length() % keyword.length());
        for (int i = 0; i < noise_count; i++) {
            char rand_char = (char) (rand() % 26 + 65);
            plainTemp = plainTemp + rand_char;
        }
    }

    // set capital case
    for (int i = 0; i < plainTemp.length(); i++) {
        if ((int) plaintext[i] >= 97 && (int) plaintext[i] <= 122) {
            plainTemp[i] = (char) plaintext[i] - 32;
        }
    }

    // build key array
    int keyArray[keyword.length()];
    for (int i = 0; i < keyword.length(); i++) {
        if ((int) keyword[i] >= 97 && (int) keyword[i] <= 122) {keyArray[i] = (int) keyword[i] - 32 - 64;}
        else {keyArray[i] = (int) keyword[i] - 64;}
    }

    // Build plaintext array
    char plainArray[plainTemp.length()/keyword.length()][keyword.length()];
    int char_count = 0;
    for (int i = 0; i < plainTemp.length()/keyword.length(); i++) {
        for (int j = 0; j < keyword.length(); j++) {
            plainArray[i][j] = plainTemp[char_count];
            char_count++;
        }
    }

    // Bubble sort the key array, and with it the plaintext array
    int min_index = 0;
    for (int i = 0; i < keyword.length() - 1; i++) {
        for (int j = 0; j < keyword.length() - i - 1; j++) {
            if (keyArray[j] > keyArray[j+1]) {
                int placeholder = keyArray[j];
                keyArray[j] = keyArray[j+1];
                keyArray[j+1] = placeholder;

                for (int k = 0; k < plainTemp.length()/keyword.length(); k++) {
                    char placeHolder = plainArray[k][j];
                    plainArray[k][j] = plainArray[k][j+1];
                    plainArray[k][j+1] = placeHolder;
                }
            }
        }
    }

    for (int i = 0; i < keyword.length(); i++) {
        for (int j = 0; j < plainTemp.length()/keyword.length(); j++) {
            ciphertext = ciphertext + plainArray[j][i];
        }
    }

    return 0;
};

int ColumnarTransCipher::decrypt(string & plaintext,const string & ciphertext,const string & keyword){
    if (!ciphertext.compare("")) {
        return 1;
    }

    string keyTemp = keyword;
    string cipherTemp = ciphertext;

    return 0;
};

