#include <iostream>
#include <fstream>
#include <cstring>
#include "ProviderDB.h"

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

//Attempt to start extra credit
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

// Needs to be here, but why isn't it a method? I'm assuming the prof messed up?
// Or I should be declaring it as a method of the Provider class. Not really sure. 
bool nameLess(const Provider& s1, const Provider& s2)
{
    return (strcmp(s1.getProviderName(), s2.getProviderName()) > 0);
}

bool specialtyLess(const Provider& s1, const Provider& s2)
{
    return (strcmp(s1.getProviderSpecialty(), s2.getProviderSpecialty()) < 0);
}

bool numberLess(const Provider& s1, const Provider& s2)
{
    return (strcmp(s1.getProviderNumber(), s2.getProviderNumber()) > 0);
}
