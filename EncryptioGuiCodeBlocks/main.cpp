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
    string plaintext = "this is the plaintext";
    string ciphertext = "this is the ciphertext";
    int keynumber = 2;
    int test = caesarCipher.encrypt(plaintext,ciphertext,keynumber);
    cout << test << endl;
    return 0;
}
