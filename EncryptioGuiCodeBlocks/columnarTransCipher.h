#include <string>

using namespace std;

class ColumnarTransCipher{
    public:
        int encrypt(const string &,string &,const string &);
        int decrypt(string &,const string &,const string &);
};
