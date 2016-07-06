/* Encryption / Decryption / Cryptanalysis Software
   James Bruska and Michael Lee
   Project Created: 07/01/2016 */

#include <iostream>
#include <windows.h>
#include <math.h>

#include "caesarCipher.h"

using namespace std;

int main(){

    CaesarCipher caesarCipher;
    plaintext = "this is the plaintext";
    ciphertext = "this is the ciphertext";
    keyword = " and it's modified!\n";
    int test = caesarCipher.encrypt(plaintext,ciphertext,keyword);
    cout << test << endl;
    cout << caesarCipher.ciphertext << endl;
    return 0;
}
