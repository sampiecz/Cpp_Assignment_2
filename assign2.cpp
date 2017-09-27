/***********************************************************
 CSCI 241 - Assignment 2 - Fall 2017

 Progammer: Sam Piecz
 Z-ID: Z1732715
 Section: 1
 TA: Sumaiya Abdul
 Date Due: September 26, 2017

 Purpose: Read providers from Binary data. Output providers
 and sort them.
 ************************************************************/
#include <iostream>
#include "Provider.h"
#include "ProviderDB.h"
using std::cout;
using std::endl;

int main()
{
    cout << "#######################################################################" << endl;
    cout << "Unsorted Print of all providers" << endl;
    cout << "#######################################################################" << endl;

    ProviderDB loadData("providerdb");
    loadData.print();

    cout << "#######################################################################" << endl;
    cout << "Sorted by Provider Number" << endl;
    cout << "#######################################################################" << endl;

    loadData.sort(&numberLess);
    loadData.print();

    cout << "#######################################################################" << endl;
    cout << "Sorted by Specialty" << endl;
    cout << "#######################################################################" << endl;

    loadData.sort(&specialtyLess);
    loadData.print();

    cout << "#######################################################################" << endl;
    cout << "Sorted by Name" << endl;
    cout << "#######################################################################" << endl;

    loadData.sort(&nameLess);
    loadData.print();

}
