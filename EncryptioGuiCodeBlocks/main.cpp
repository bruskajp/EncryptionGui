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
    string plaintext = "Abc Xyz";
    string ciphertext = "";
    int keynumber = 1;
    int test = caesarCipher.encrypt(plaintext,ciphertext,keynumber);
    cout << test << endl;
    cout << ciphertext << endl;
    return 0;
}
