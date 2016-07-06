#include "caesarCipher.h"

#include <iostream>

using namespace std;

int CaesarCipher::encrypt(const string & plaintext,string & ciphertext,const int & keyword){
    if (plaintext.compare("")) {
        return 1;
    }

    int keyTemp = keyword % 26;
    string plainTemp = plaintext;

    for (int i = 0; i < plaintext.length(); i++) {
        if (plaintext[i] != ' ') {
                if ((int) plaintext[i] >= 97 && (int) plaintext[i] <= 122) {
                    plainTemp[i] = (char) plaintext[i] - 32;
                }
                else if ((int) plaintext[i] < 65 || (int) plaintext[i] > 122) {
                    return 1;
                }

                if ((int) plainTemp[i] + keyTemp <= 90) {
                    ciphertext += (char) plainTemp[i] + keyTemp;
                }
                else {
                    ciphertext += (char) plainTemp[i] - 26 + keyTemp;
                }
        }
    }
    return 0;
};

