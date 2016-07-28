#include "railFenceCipher.h"

#include <iostream>
#include <list>

using namespace std;

int RailFenceCipher::encrypt(const string & plaintext,string & ciphertext,const int & keynumber){
    //int error = encryptionErrorChecking(plaintext,ciphertext,keyword);

    /*if (error != 0) {
        return 1;
    }*/

    int keyTemp = keynumber % plaintext.length();
    list<string> substrings;
    for (int i = 0; i < keyTemp; i++) {
        substrings.push_front("");
    }
    list<string>::iterator iter = substrings.begin();

    int interval = 1;
    bool increasing = true;
    for (int i = 0; i < plaintext.length(); i++) {

        *iter = *iter + plaintext[i];

        if (interval == keyTemp) {increasing = false;}
        else {increasing = true;}

        if (increasing) {interval += 1; iter++;}
        else {interval -= 1; iter--;}
    }

    iter = substrings.end();
    ciphertext = *iter;
    for (int i = keyTemp - 1;i > 0;i--) {
        iter--;
        ciphertext = *iter + ciphertext;
    }

    return 0;
};

int RailFenceCipher::decrypt(string & plaintext,const string & ciphertext,const int & keynumber){
    if (!ciphertext.compare("")) {
        return 1;
    }

    int keyTemp = keynumber;
    string cipherTemp = ciphertext;

    return 0;
};
