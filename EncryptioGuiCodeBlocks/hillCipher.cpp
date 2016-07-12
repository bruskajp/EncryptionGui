#include "hillCipher.h"

#include <iostream>

using namespace std;

int HillCipher::encrypt(const string & plaintext,string & ciphertext,const int & keynumber){
    if (!plaintext.compare("")) {
        return 1;
    }

    int keyTemp = keynumber; //Array
    string plainTemp = plaintext;

    return 0;
};

int HillCipher::decrypt(string & plaintext,const string & ciphertext,const int & keynumber){
    if (!ciphertext.compare("")) {
        return 1;
    }

    int keyTemp = keynumber; //Array
    string cipherTemp = ciphertext;

    return 0;
};

