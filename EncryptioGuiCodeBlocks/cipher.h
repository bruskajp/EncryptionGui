#include <string>

using namespace std;

class Cipher{
    protected:
        int encryptionErrorChecking(const string & plaintext);
        int decryptionErrorChecking(const string & ciphertext);
};
