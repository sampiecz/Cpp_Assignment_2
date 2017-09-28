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
 Returns: Nothing
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
 Returns: Nothing
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
 Returns: Nothing
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
 sort
 
 Use: Fancy sort method that allows one to pass in a specific
 sort function for each use case.  Said to be more efficient 
 and clean but takes more code to write. Plus side, calling
 this function is much more clean in int main.
 
 Parameters: compare pointer  and const references to Provider
 Returns: Nothing
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
 nameLess
 
 Use: Function that can be passed into sort method. Sorts providers
 by name.
 
 Parameters: Two const references to Provider.
 Return: A comparison between string 1 and string 2. These strings
 have been "pulled in" from the getter methods. 
 ***************************************************************/
bool nameLess(const Provider& s1, const Provider& s2)
{
    return (strcmp(s1.getProviderName(), s2.getProviderName()) > 0);
}

/***************************************************************
 specialtyLess
 
 Use: Function that can be passed into sort method. Sorts providers
 by specialty.  The name is bad because it sorts in descending
 order.  However at the time of writing this comment it is 11:40PM
 and at this point I don't think I have the time to rename it.
 
 Parameters: Two const references to Provider.
 Return: A comparison between string 1 and string 2. These strings
 have been "pulled in" from the getter methods. 
 ***************************************************************/
bool specialtyLess(const Provider& s1, const Provider& s2)
{
    return (strcmp(s1.getProviderSpecialty(), s2.getProviderSpecialty()) < 0);
}

/***************************************************************
 numberLess
 
 Use: Function that can be passed into sort method. Sorts providers
 by name.
 
 Parameters: Two const references to Provider.
 Return: A comparison between string 1 and string 2. These strings
 have been "pulled in" from the getter methods.
 ***************************************************************/
bool numberLess(const Provider& s1, const Provider& s2)
{
    return (strcmp(s1.getProviderNumber(), s2.getProviderNumber()) > 0);
}
