

#include <iostream>
#include <iomanip>
#include <cmath>
#include <math.h>
using namespace std;
int main()
{
    cout << fixed << setprecision(2);
    double principal{ 24.00 };
    double rate{ 0.1 };

    cout << "Initial principal: " << principal << endl;
    cout << "Interest rate: " << rate << endl;

    cout << "\nYear" << setw(20) << "Amount on deposit" << endl;

    for (unsigned int year{ 1 }; year <= 390; year++) {
        double amount = principal * pow(1.0 + rate, year);
        cout << setw(4) << year<<" " << setw(20) << amount << endl;
    }
}

