#include <string>
#include "cipher.h"

using namespace std;

class CaesarCipher : public Cipher{
    public:
        int encrypt(const string &,string &,const int &);
        int decrypt(string &,const string &,const int &);
};
