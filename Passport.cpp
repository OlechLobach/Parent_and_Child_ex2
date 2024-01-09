#include "Passport.h"

Passport::Passport(string first, string last, string nation, string number)
    : firstName(first), lastName(last), nationality(nation), passportNumber(number) {}

void Passport::displayInfo() const {
    cout << "First Name: " << firstName << endl;
    cout << "Last Name: " << lastName << endl;
    cout << "Nationality: " << nationality << endl;
    cout << "Passport Number: " << passportNumber << endl;
}