#include "columnarTransCipher.h"

#include <iostream>

using namespace std;

int ColumnarTransCipher::encrypt(const string & plaintext,string & ciphertext,const string & keyword){
    if (!plaintext.compare("")) {
        return 1;
    }

    string keyTemp = keyword;
    string plainTemp = plaintext;

    return 0;
};

int ColumnarTransCipher::decrypt(string & plaintext,const string & ciphertext,const string & keyword){
    if (!ciphertext.compare("")) {
        return 1;
    }

    string keyTemp = keyword);
    string cipherTemp = ciphertext;

    return 0;
};

