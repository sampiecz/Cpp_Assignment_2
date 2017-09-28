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

/***************************************************************
 Provider
 
 Use: Method that allows instation of an instance of the Provider class
 
 Parameters: nothing
 Returns: nothing
 ***************************************************************/
Provider::Provider()
{
}

/***************************************************************
 Provider
 
 Use: Method that allows the updating or setting of Provider data
 
 Parameters: constant character pointers for each piece of 
 provider data.  Too many to list out again. You get the point.
 Returns: nothing
 ***************************************************************/
Provider::Provider(const char* number_1,
                   const char* name_1,
                   const char* specialty_1,
                   const char* address_1_1,
                   const char* address_2_1,
                   const char* city_1,
                   const char* state_1,
                   const char* zip_code_1,
                   const char* phone_number_1)
{
    strcpy(number, number_1);
    strcpy(name, name_1);
    strcpy(specialty, specialty_1);
    strcpy(address_1, address_1_1);
    strcpy(address_2, address_2_1);
    strcpy(city, city_1);
    strcpy(state, state_1);
    strcpy(zip_code, zip_code_1);
    strcpy(phone_number, phone_number_1);
}

/***************************************************************
 getProviderNumber
 
 Use: Fetches current providers number

 Parameters: No parameters
 Returns: number
 ***************************************************************/
const char* Provider::getProviderNumber() const
{
    return number;
}

/***************************************************************
 getProviderName
 
 Use: Fetches current providers name

 Parameters: No parameters
 Returns: name
 ***************************************************************/
const char* Provider::getProviderName() const
{
    return name;
}

/***************************************************************
 getProviderSpecialty
 
 Use: Fetches current providers specialty

 Parameters: No parameters
 Returns: specialty
 ***************************************************************/
const char* Provider::getProviderSpecialty() const
{
    return specialty;
}

/***************************************************************
 getProviderAddress1
 
 Use: Fetches current providers address_1

 Parameters: No parameters
 Returns: address_1
 ***************************************************************/
const char* Provider::getProviderAddress1() const
{
    return address_1;
}

/***************************************************************
 getProviderAddress2
 
 Use: Fetches current providers address_2

 Parameters: No parameters
 Returns: address_2
 ***************************************************************/
const char* Provider::getProviderAddress2() const
{
    return address_2;
}

/***************************************************************
 getProviderCity
 
 Use: Fetches current providers city

 Parameters: No parameters
 Returns: city
 ***************************************************************/
const char* Provider::getProviderCity() const
{
    return city;
}

/***************************************************************
 getProviderState
 
 Use: Fetches current providers state

 Parameters: No parameters
 Returns: state
 ***************************************************************/
const char* Provider::getProviderState() const
{
    return state;
}

/***************************************************************
 getProviderZipCode
 
 Use: Fetches current providers zip_code

 Parameters: No parameters
 Returns: zip_code
 ***************************************************************/
const char* Provider::getProviderZipCode() const
{
    return zip_code;
}

/***************************************************************
 getProviderPhoneNumber
 
 Use: Fetches current providers phone_number

 Parameters: No parameters
 Returns: phone_number
 ***************************************************************/
const char* Provider::getProviderPhoneNumber() const
{
   return phone_number;
}


/***************************************************************
 print
 
 Use: Well.  If you didn't already guess what this function does,
 I know it's a hard one, it prints provider data.  Pretty neat.
 
 Parameters: nothing
 Returns: nothing
 ***************************************************************/
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
