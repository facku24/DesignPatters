#include<cstdlib>
#include<iostream>
#include<string>

#ifndef HASH_H
#define HASH_H

class hash
{
    private:
        static const int tableSize = 10;
        struct item
        {
            std::string name;
            std::string drink;
            item* next;
        }
        item* HashTable[tableSize];
    public:
        hash();
        int Hash(std::string key);

};

#endif // HASH_H
