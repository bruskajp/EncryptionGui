#include <iostream>
#include <windows.h>
#include <math.h>

using namespace std;

class Display {
    public:
        int name;
    private:
        int id;
};

Display display;

int main(){

    display.name = 2;

    cout << "eat fish\n";
    cout << "tuna or salmon\n";
    cout << display.name << "\n";
    return 0;
}
