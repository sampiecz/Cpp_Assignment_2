#include "ProviderDB.h"
using namespace std;

ProviderDB::ProviderDB()
{
}

ProviderDB::ProviderDB(char * const)
{
}

ProviderDB::sortByProvider()
{
    int i, j;
    int bucket;

    for (i = 1; i < size; i++)
    {
        bucket = numbers[i];

        for (j = i; (j > 0) && (numbers[j-1] > bucket); j--)
            numbers[j] = numbers[j-1];

        numbers[j] = bucket;
    }
}

ProviderDB::sortBySpecialty()
{
    int i, j;
    int bucket;

    for (i = 1; i < size; i++)
    {
        bucket = numbers[i];

        for (j = i; (j > 0) && (numbers[j-1] > bucket); j--)
            numbers[j] = numbers[j-1];

        numbers[j] = bucket;
    }
}

ProviderDB::sortByName()
{
    int i, j;
    int bucket;

    for (i = 1; i < size; i++)
    {
        bucket = numbers[i];

        for (j = i; (j > 0) && (numbers[j-1] > bucket); j--)
            numbers[j] = numbers[j-1];

        numbers[j] = bucket;
    }
}
