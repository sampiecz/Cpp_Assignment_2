#ifndef PROVIDERDB_H
#define PROVIDERDB_H

//*********************************************************************
// FILE:        ProviderDB.h
// AUTHOR:      Samuel Piecz
// LOGON ID:    Z1732715
// DUE DATE:    9/26/17
//
// PURPOSE:     Declaration for the Provider class, which represents
//              information about a health care provider.
//********************************************************************
#include "Provider.h"

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

        bool nameLess(const Provider&, const Provider&);
        bool numberLess(const Provider&, const Provider&);
        bool specialtyLess(const Provider&, const Provider&);
};

// Was told to put this function outside of the class.
// Still don't really understand why that would be the case.
// I guess it gets passed to the sort method as an argument. 

#endif

