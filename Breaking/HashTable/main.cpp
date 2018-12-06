#include<cstdlib>
#include<iostream>
#include<string>
#include"hash.h"


int main(int argc, char** argv)
{
    int index;
    hash hashObj;

    index = hashObj.Hash("Paula");

    std::cout << "index = " << index << std::endl;
    return 0;
}
