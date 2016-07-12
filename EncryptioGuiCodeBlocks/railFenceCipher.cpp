#include "railFenceCipher.h"

#include <iostream>

using namespace std;

int RailFenceCipher::encrypt(const string & plaintext,string & ciphertext,const int & keynumber){
    if (!plaintext.compare("")) {
        return 1;
    }

    int keyTemp = keynumber;
    string plainTemp = plaintext;

    return 0;
};

int RailFenceCipher::decrypt(string & plaintext,const string & ciphertext,const int & keynumber){
    if (!ciphertext.compare("")) {
        return 1;
    }

    int keyTemp = keynumber;
    string cipherTemp = ciphertext;

    return 0;
};

