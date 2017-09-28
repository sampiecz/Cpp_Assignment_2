#ifndef PROVIDERDB_H
#define PROVIDERDB_H

//*********************************************************************
// FILE:        ProviderDB.h
// AUTHOR:      Samuel Piecz
// LOGON ID:    Z1732715
// DUE DATE:    9/27/17
//
// PURPOSE:     Declaration for the ProviderDB class, which represents
// an array of providers. Also contains method prototypes for sorting.
//********************************************************************/

#include "Provider.h"

/***************************************************************
 Class ProviderDB
 
 Use: Creates a new data type called ProviderDB. This takes
 provider instances and packs them into an array. Hence the name.
 ***************************************************************/
class ProviderDB
{
    private:
        //Data members
        Provider providerArray[40];
        int numberOfProviders;

    public:
        //Default constructor
        ProviderDB();

        //Alternate ProviderDB constructor
        ProviderDB(const char* filename);

        //Print function
        void print() const;

        //Sorting method
        void sort(bool (*compare)(const Provider&, const Provider&));

};

// Prototypes for functions.  Not methods so that we can pass them
// into class instance's methods.
bool nameLess(const Provider&, const Provider&);
bool numberLess(const Provider&, const Provider&);
bool specialtyLess(const Provider&, const Provider&);

#endif

