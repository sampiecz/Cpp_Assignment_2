#include <iostream>
#include <fstream>
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

    inFile.read((char *) this, sizeof(providerArray));
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


void ProviderDB::sortByProviderNumber()
{
    int i, j;
    int bucket;

    for (i = 1; i < numberOfProviders; i++)
    {
        bucket = providerArray[i];

        for (j = i; (j > 0) && (providerArray[j-1] > bucket); j--)
            providerArray[j] = providerArray[j-1];

        providerArray[j] = bucket;
    }
}

void ProviderDB::sortBySpecialty()
{
    int i, j;
    int bucket;

    for (i = 1; i < numberOfProviders; i++)
    {
        bucket = providerArray[i];

        for (j = i; (j > 0) && (providerArray[j-1] > bucket); j--)
            providerArray[j] = providerArray[j-1];

        providerArray[j] = bucket;
    }
}

void ProviderDB::sortByName()
{
    int i, j;
    int bucket;

    for (i = 1; i < numberOfProviders; i++)
    {
        bucket = providerArray[i];

        for (j = i; (j > 0) && (providerArray[j-1] > bucket); j--)
            providerArray[j] = providerArray[j-1];

        providerArray[j] = bucket;
    }
}
