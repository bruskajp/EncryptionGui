#include <string>

using namespace std;

class BytePadding{
    public:
        void iso10126(string & text);
};

class Padding{
    public:
        BytePadding bytePadding;
};

