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
        char  providerArray[40] = {};
        int numberOfProviders = 0;

    public:
        //Default constructor
        ProviderDB();

        //Alternate ProviderDB constructor
        ProviderDB(const char* filename);

        //Print function
        void print() const;

        //Sorting method
        void sortByProviderNumber();

        //Sorting method
        void sortBySpecialty();

        //Sorthing method
        void sortByName();
};

#endif

