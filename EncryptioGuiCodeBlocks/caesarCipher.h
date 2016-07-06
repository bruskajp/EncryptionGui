#include <string>

using namespace std;

class CaesarCipher{
    public:
        string plaintext;
        string ciphertext;
        string keyword;
        int encrypt(string,&string,string);
        int decrypt(&string,string,string);
};
