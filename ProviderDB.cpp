/***********************************************************
 CSCI 241 - Assignment 2 - Fall 2017
 Progammer: Sam Piecz
 Z-ID: Z1732715
 Section: 1
 TA: Sumaiya Abdul
 Date Due: September 27, 2017
 Purpose: Takes all takes all the classes and their methods
 makes it possible to use them all in one place cleanly. It
 outputs an instance of the ProviderDB class and sorts and 
 prints it.
 ************************************************************/

#include <iostream>
#include <fstream>
#include <cstring>
#include "ProviderDB.h"

using std::cout;
using std::cerr;
using std::endl;
using std::ifstream;
using std::ios;


/***************************************************************
 ProviderDB
 
 Use: Instiates an instance of the ProviderDB class
 
 Parameters: 1. No parameters
 ***************************************************************/
ProviderDB::ProviderDB()
{
}

/***************************************************************
 ProviderDB
 
 Use: Instiates an instance of the ProviderDB class, but allows
 a file to be taken as a parameter.
 
 Parameters: 1. const char* filename: A const char pointer called 
 filename. This allows a filename to be provided when the object
 is instianted.
 ***************************************************************/
ProviderDB::ProviderDB(const char* filename)
{
    ifstream inFile;

    inFile.open(filename, ios::binary);

    if (!inFile)
    {
        cerr << "File does not exist" << endl;
        exit(1);
    }

    inFile.read((char *) this, sizeof(ProviderDB));
    inFile.close();
}

/***************************************************************
 print
 
 Use: Loops through ProviderDB array and prints each instance
 that is contained in the array.
 
 Parameters: No parameters.
 ***************************************************************/
void ProviderDB::print() const
{
    // loops through each item in provider array and prints it
    for (int i = 0; i < numberOfProviders; i++)
    {
        providerArray[i].print();
    }
}

/***************************************************************
 sortByProviderNumber
 
 Use: Loops through ProviderDB array and prints each instance
 that is contained in the array.
 
 Parameters: No parameters.
 ***************************************************************/
void ProviderDB::sort(bool (*compare)(const Provider&, const Provider&))
{
    int i, j;
    Provider bucket;

    for (i = 1; i < numberOfProviders; i++)
    {
        bucket = providerArray[i];

        for (j = i; (j > 0) && (compare(providerArray[j-1], bucket)); j--)
            providerArray[j] = providerArray[j-1];

        providerArray[j] = bucket;
    }

}


/***************************************************************
 sortByProviderNumber
 
 Use: Loops through ProviderDB array and prints each instance
 that is contained in the array.
 
 Parameters: No parameters.
 ***************************************************************/
bool nameLess(const Provider& s1, const Provider& s2)
{
    return (strcmp(s1.getProviderName(), s2.getProviderName()) > 0);
}

/***************************************************************
 sortByProviderNumber
 
 Use: Loops through ProviderDB array and prints each instance
 that is contained in the array.
 
 Parameters: No parameters.
 ***************************************************************/
bool specialtyLess(const Provider& s1, const Provider& s2)
{
    return (strcmp(s1.getProviderSpecialty(), s2.getProviderSpecialty()) < 0);
}

/***************************************************************
 sortByProviderNumber
 
 Use: Loops through ProviderDB array and prints each instance
 that is contained in the array.
 
 Parameters: No parameters.
 ***************************************************************/
bool numberLess(const Provider& s1, const Provider& s2)
{
    return (strcmp(s1.getProviderNumber(), s2.getProviderNumber()) > 0);
}
