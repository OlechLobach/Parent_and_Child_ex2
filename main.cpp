#include "Passport.h"
#include "ForeignPassport.h"

int main() {
    Passport ukrainianPassport("John", "Doe", "Ukrainian", "AB123456");
    ForeignPassport foreignPassport("John", "Doe", "Ukrainian", "AB123456", "USA");

    cout << "Ukrainian Passport Information:" << endl;
    ukrainianPassport.displayInfo();
    cout << endl;

    cout << "Foreign Passport Information:" << endl;
    foreignPassport.displayForeignPassportInfo();
    cout << endl;

    return 0;
}