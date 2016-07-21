#include <string>

using namespace std;

class Cipher{
    protected:
        int encyptionErrorChecking(const string & plaintext);
        int decyptionErrorChecking(const string & ciphertext);
};
