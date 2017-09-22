#include <iostream>
#include "Provider.h"

using std::cout;
using std::endl;

//Provider Constructor
Provider::Provider()
{
}

//Print
void Provider::print() const
{
    // print provider
    cout << "#" << number << endl;
    cout << name << endl;
    cout << specialty << endl;
    cout << address_1 << endl;
    cout << address_2 << endl;
    cout << city << endl;
    cout << state << endl;
    cout << zip_code << endl;
    cout << phone_number << endl;
    cout << "\n";
}

/*

char Provider::getProviderNumber() const
{
   return number;
}

char Provider::getSpecialty() const
{
    return specialty;
}

char Provider::getName() const
{
    return name;
}

*/
