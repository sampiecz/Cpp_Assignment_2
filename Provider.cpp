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

//Get provider number (return it)
char Provider::getProviderNumber() const
{
    return 0;
}

//Get specialty (return it)
char Provider::getSpecialty() const
{
    return 0;
}

//Get name (return it)
char Provider::getName() const
{
    return 0;
}
