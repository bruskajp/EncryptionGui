#include <string>
#include "cipher.h"

using namespace std;

int Cipher::encryptionErrorChecking(const string & plaintext){
    if (!plaintext.compare("")) {
        return 1;
    }
}

int Cipher::decryptionErrorChecking(const string & ciphertext){
    if (!ciphertext.compare("")) {
        return 1;
    }
}
