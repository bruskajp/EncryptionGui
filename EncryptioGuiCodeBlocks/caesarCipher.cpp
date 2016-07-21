#include "caesarCipher.h"

#include <iostream>

using namespace std;

int CaesarCipher::encrypt(const string & plaintext,string & ciphertext,const int & keynumber){
    int error = Cipher::encryptionErrorChecking(plaintext);

    int keyTemp = keynumber % 26;
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

int CaesarCipher::decrypt(string & plaintext,const string & ciphertext,const int & keynumber){
    if (!ciphertext.compare("")) {
        return 1;
    }

    int keyTemp = 26 - (keynumber % 26);
    string cipherTemp = ciphertext;

    for (int i = 0; i < ciphertext.length(); i++) {
        if (ciphertext[i] != ' ') {
                if ((int) ciphertext[i] >= 97 && (int) ciphertext[i] <= 122) {
                    cipherTemp[i] = (char) ciphertext[i] - 32;
                }
                else if ((int) ciphertext[i] < 65 || (int) ciphertext[i] > 122) {
                    return 1;
                }

                if ((int) cipherTemp[i] + keyTemp <= 90) {
                    plaintext += (char) cipherTemp[i] + keyTemp;
                }
                else {
                    plaintext += (char) cipherTemp[i] - 26 + keyTemp;
                }
        }
    }
    return 0;
};

