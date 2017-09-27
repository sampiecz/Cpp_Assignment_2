#include <iostream>
#include <fstream>
#include <cstring>
#include "ProviderDB.h"
#include "Provider.h"

using std::cout;
using std::cerr;
using std::endl;
using std::ifstream;
using std::ios;


ProviderDB::ProviderDB()
{
}

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
 print_provider_array
 
 Use: Loops through array of each individual provider and calls
 the provider print method to output each individual provider's
 data.
 
 Parameters: 1. p_array: An array containing arrays of each
 individual provider's data.
 
 2. j: Placeholder for loop, nothing worth describing.
 ***************************************************************/
void ProviderDB::print() const
{
    // loops through each item in provider array and prints it
    for (int i = 0; i < numberOfProviders; i++)
    {
        providerArray[i].print();
    }
}

/*
void ProviderDB::sortByProviderNumber()
{
    int i, j;
    Provider bucket;

    for (i = 1; i < numberOfProviders; i++)
    {
        bucket = providerArray[i];

        for (j = i; (j > 0) && (strcmp(providerArray[j-1].getProviderNumber(), bucket.getProviderNumber()) > 0); j--)
            providerArray[j] = providerArray[j-1];

        providerArray[j] = bucket;
    }
}

void ProviderDB::sortBySpecialty()
{
    int i, j;
    Provider bucket;

    for (i = 1; i < numberOfProviders; i++)
    {
        bucket = providerArray[i];

        for (j = i; (j > 0) && (strcmp(providerArray[j-1].getProviderSpecialty(), bucket.getProviderSpecialty()) < 0); j--)
            providerArray[j] = providerArray[j-1];

        providerArray[j] = bucket;
    }
}

void ProviderDB::sortByName()
{
    int i, j;
    Provider bucket;

    for (i = 1; i < numberOfProviders; i++)
    {
        bucket = providerArray[i];

        for (j = i; (j > 0) && (strcmp(providerArray[j-1].getProviderName(), bucket.getProviderName()) > 0); j--)
            providerArray[j] = providerArray[j-1];

        providerArray[j] = bucket;
    }
}
*/


//Attempt to start extra credit
void ProviderDB::sort(bool (*compare)(const Provider&, const Provider&))
{
    int i, j, min;
    Provider bucket;

    for (i = 0; i < (numberOfProviders - 1); i++)
    {
        min = i;

        for (j = i+1; j < numOfProviders; j++)
        {
            if (compare(providerArray[j], providerArray[min]))
                min = j;
        }

        bucket = providerArray[min];
        providerArray[min] = providerArray[i];
        providerArray[i] = bucket;
    }
}

// Needs to be here, but why isn't it a method? I'm assuming the prof messed up?
// Or I should be declaring it as a method of the Provider class. Not really sure. 
bool nameLess(const Provider& s1, const Provider& s2)
{
    if (strcmp(s1.getProviderName(), s2.getProviderName()) < 0)
        return true;
    else
        return false;
}

bool specialtyLess(const Provider& s1, const Provider& s2)
{
    if (strcmp(s1.getProviderSpecialty(), s2.getProviderSpecialty()) < 0)
        return true;
    else
        return false;
}

bool numberLess(const Provider& s1, const Provider& s2)
{
    if (strcmp(s1.getProviderNumber(), s2.getProviderNumber()) < 0)
        return true;
    else
        return false;
}
