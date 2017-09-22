/***********************************************************
 CSCI 241 - Assignment 2 - Fall 2017

 Progammer: Sam Piecz
 Z-ID: Z1732715
 Section: 1
 TA: Sumaiya Abdul
 Date Due: September 26, 2017

 Purpose: Not quite sure yet.  Some continuation of providers.
 ************************************************************/
#include "Provider.h"
#include "ProviderDB.h"
using namespace std;

int main()
{
    ProviderDB opener("providerdb");
    opener.print();

    ProviderDB sortByProviderNumber;
    sortByProviderNumber.print();

    ProviderDB sortBySpecialty;
    sortBySpecialty.print();

    ProviderDB sortByName;
    sortByName.print();
}
