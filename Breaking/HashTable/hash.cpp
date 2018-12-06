#include <cstdlib>
#include <iostream>
#include <string>
#include "hash.h"

hash::hash()
{
    for(int i = 0; i < tableSize; i++)
    {
        HashTable[i] = new item;
        HashTable[i]->name = "empty";
        HashTable[i]->drink = "empty";
        HashTable[i]->next = NULL;
    }
}

int hash::Hash(std::string key)
{
    int hash = 0;
    int index;

    for(int i = 0; i < key.length(); i++)
    {
        hash += (int)key[i];
        std::cout << "hash = " << hash << std::endl;
    }
    
    index = hash  %  tableSize;

    return index;
}
