#ifndef PASSPORT_H
#define PASSPORT_H

#include <iostream>
#include <string>
using namespace std;
class Passport {
protected:
    string firstName;
    string lastName;
    string nationality;
    string passportNumber;

public:
    Passport(string first, string last, string nation, string number);
    void displayInfo() const;
};

#endif 
