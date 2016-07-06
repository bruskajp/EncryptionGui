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
    caesarCipher.plaintext = "this is the plaintext";
    caesarCipher.ciphertext = "this is the ciphertext";
    caesarCipher.keyword = " and it's modified!\n";
    int test = caesarCipher.encrypt(caesarCipher.plaintext,caesarCipher.ciphertext,caesarCipher.keyword);
    cout << test << endl;
    cout << caesarCipher.ciphertext << endl;
    return 0;
}
