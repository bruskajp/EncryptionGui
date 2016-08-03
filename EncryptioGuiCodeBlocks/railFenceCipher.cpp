#include "railFenceCipher.h"

#include <iostream>
#include <list>

using namespace std;

int RailFenceCipher::encrypt(const string & plaintext,string & ciphertext,const int & keynumber){
    /*int error = encryptionErrorChecking(plaintext,ciphertext,keynumber);

    if (error != 0) {
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
        else if (interval == 1) {increasing = true;}

        if (increasing) {interval += 1; iter++;}
        else {interval -= 1; iter--;}
    }

    iter = substrings.begin();
    ciphertext = *iter;
    for (int i = 1; i < keyTemp; i++) {
        iter++;
        ciphertext = ciphertext + *iter;
    }

    return 0;
};

int RailFenceCipher::decrypt(string & plaintext,const string & ciphertext,const int & keynumber){
    /*int error = decryptionErrorChecking(plaintext,ciphertext,keynumber);

    if (error != 0) {
        return 1;
    }*/

    int keyTemp = keynumber % ciphertext.length();
    list<string> substrings;
    for (int i = 0; i < keyTemp; i++) {
        substrings.push_front("");
    }
    list<string>::iterator iter = substrings.begin();

    int counters[keyTemp];
    for (int i = 0; i < keyTemp; i++) {counters[i] = 0;}
    int interval = 1;
    bool increasing = true;
    for (int i = 0; i < ciphertext.length(); i++) {

        counters[interval-1] += 1;

        if (interval == keyTemp) {increasing = false;}
        else if (interval == 1) {increasing = true;}

        if (increasing) {interval += 1;}
        else {interval -= 1;}
    }

    interval = 0;
    int temp_count = 0;
    for (int i = 0; i < ciphertext.length(); i++){
        *iter = *iter + ciphertext[i];
        temp_count++;

        if (temp_count == counters[interval]) {
                interval++;
                temp_count = 0;
                iter++;
        }
    }

    iter = substrings.begin();
    int counters2[keyTemp];
    for (int i = 0; i < keyTemp; i++) {counters2[i] = 0;}
    interval = 0;
    increasing = true;
    for (int i = 0; i < ciphertext.length();i++) {

        string temp = *iter;

        plaintext = plaintext + temp[counters2[interval]];
        counters2[interval] += 1;

        if (interval == keyTemp-1) {increasing = false;}
        else if (interval == 0) {increasing = true;}

        if (increasing) {interval += 1; iter++;}
        else {interval -= 1; iter--;}
    }

    return 0;
};
