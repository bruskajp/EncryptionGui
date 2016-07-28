/* Encryption / Decryption / Cryptanalysis Software
   James Bruska and Michael Lee
   Project Created: 07/01/2016 */

#include <iostream>
#include <windows.h>
#include <math.h>

#include "caesarCipher.h"
#include "columnarTransCipher.h"
#include "fourSquareCipher.h"
#include "hillCipher.h"
#include "playfairCipher.h"
#include "railFenceCipher.h"
#include "vigenereCipher.h"

using namespace std;

int main(){

    RailFenceCipher railFenceCipher;
    string plaintext = "ABCDCBABCDCBABCDCBABC";
    string ciphertext = "";
    int keynumber = 4;
    int test = railFenceCipher.encrypt(plaintext,ciphertext,keynumber);
    cout << test << endl;
    cout << ciphertext << endl;
    //plaintext = "";
    //int test2 = caesarCipher.decrypt(plaintext,ciphertext,keynumber);
    //cout << test2 << endl;
    //cout << plaintext << endl;
    return 0;
}
