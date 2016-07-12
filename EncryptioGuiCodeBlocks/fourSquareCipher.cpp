#include "fourSquareCipher.h"

#include <iostream>

using namespace std;

int FourSquareCipher::encrypt(const string & plaintext,string & ciphertext,const string & keyword1,const string & keyword2){
    if (!plaintext.compare("")) {
        return 1;
    }

    string keyTemp1 = keyword1;
    string keyTemp2 = keyword2;
    string plainTemp = plaintext;

    return 0;
};

int FourSquareCipher::decrypt(string & plaintext,const string & ciphertext,const int & keyword){
    if (!ciphertext.compare("")) {
        return 1;
    }

    string keyTemp1 = keyword1;
    string keyTemp2 = keyword2;
    string cipherTemp = ciphertext;

    return 0;
};

