#ifndef FOREIGNPASSPORT_H
#define FOREIGNPASSPORT_H

#include "Passport.h"

class ForeignPassport : public Passport {
private:
    string passportCountry;
    string visitedCountries[4];

public:
    ForeignPassport(string first, string last, string nation, string number, string country);
    void displayForeignPassportInfo() const;
};

#endif 
