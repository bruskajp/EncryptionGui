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
    CaesarCipher caesarCipher;
    ColumnarTransCipher columnarTransCipher;
    string plaintext = "defend the castle";
    string ciphertext = "";
    int keynumber = 4;
    string keyword = "germany";
    int test = caesarCipher.encrypt(plaintext,ciphertext,keynumber);
    cout << "Plaintext: "<< plaintext << endl;
    cout << "Caesar: "<< ciphertext << endl;
    ciphertext = "";
    test = railFenceCipher.encrypt(plaintext,ciphertext,keynumber);
    cout << "Rail Fence: "<< ciphertext << endl;
    ciphertext = "";
    test = columnarTransCipher.encrypt(plaintext,ciphertext,keyword);
    cout << "Columnar: "<< ciphertext << endl;
    plaintext = "";
    //test = railFenceCipher.decrypt(plaintext,ciphertext,keynumber);
    //cout << "Decrypted: "<< plaintext << endl;
    return 0;
}
