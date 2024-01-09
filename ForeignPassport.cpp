#include "ForeignPassport.h"

ForeignPassport::ForeignPassport(string first, string last, string nation, string number, string country)
    : Passport(first, last, nation, number), passportCountry(country) {
   
    visitedCountries[0] = "Poland";
    visitedCountries[1] = "Germany";
    visitedCountries[2] = "France";
    visitedCountries[3] = "USA";
}

void ForeignPassport::displayForeignPassportInfo() const {
    displayInfo(); 
    cout << "Passport Country: " << passportCountry << endl;
    cout << "Visited Countries: " << endl;
    for (int i = 0; i < 4; ++i) {
        cout << visitedCountries[i] << endl;
    }
}