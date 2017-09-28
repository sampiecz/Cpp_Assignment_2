/***********************************************************
 CSCI 241 - Assignment 2 - Fall 2017
 
 Progammer: Sam Piecz
 Z-ID: Z1732715
 Section: 1
 TA: Sumaiya Abdul
 Date Due: September 27, 2017
 
 Purpose: This cpp file allows the creation of provider
 instances.  It also allows providers to be printed.
 These two tasks are done with an instantiator method and
 print method.
 ************************************************************/

#include <iostream>
#include <cstring>
#include "Provider.h"

using std::cout;
using std::endl;
using std::strcpy;

//Provider Constructor
Provider::Provider()
{
}

// Extra credit part
Provider::Provider(const char*, const char*, const char*, const char*, const char*, const char*, const char*, const char*, const char*)
{
}

const char* Provider::getProviderNumber() const
{
    return number;
}

const char* Provider::getName() const
{
    return name;
}

const char* Provider::getSpecialty() const
{
    return specialty;
}

const char* Provider::getAddress1() const
{
    return address_1;
}

const char* Provider::getAddress2() const
{
    return address_2;
}

const char* Provider::getCity() const
{
    return city;
}

const char* Provider::getState() const
{
    return state;
}

const char* Provider::getZipCode() const
{
    return zip_code;
}

const char* Provider::getPhoneNumber() const
{
   return phone_number;
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
    cout << city << ", " << state << " " << zip_code << endl;
    cout << phone_number << endl;
    cout << "\n";
}
