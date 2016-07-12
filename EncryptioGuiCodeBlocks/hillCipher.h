#include <string>

using namespace std;

class HillCipher{
    public:
        int encrypt(const string &,string &,const int &); //Array is key
        int decrypt(string &,const string &,const int &);
};
