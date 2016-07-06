#include "caesarCipher.h"

#include <iostream>

using namespace std;

int CaesarCipher::encrypt(string plaintext,string &ciphertext,string keyword){
    ciphertext = plaintext + keyword;
    return 0;
};

