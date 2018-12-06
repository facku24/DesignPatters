#include <vector>
#include <string>
#include <iostream>

static const int numElems = 5;

std::vector<std::string> mergeVectors(std::vector<std::string> (&words), std::vector<std::string> (&more))
{
    std::vector<std::string> result;
    for(auto elem : words)
        result.push_back(elem);
    for(auto elem : more)
        result.push_back(elem);

    return result;
}

int main (int argc, char* argv[])
{
    std::vector<std::string> vector1; 

    std::cout << "Ingrese " << numElems << " palabras" << std::endl;
    for(int i = 0; i < numElems; i++)
    {
        std::string word;
        std::cin >> word;
        vector1.push_back(word);
    }

    std::vector<std::string> vector2;
    std::cout << "Ingrese " << numElems << " palabras mas" << std::endl;
    for(int i = 0; i < numElems; i++)
    {
        std::string word;
        std::cin >> word;
        vector2.push_back(word);
    }

    std::vector<std::string> vector3;
    vector3 = mergeVectors(vector1, vector2);

    std::cout << "Las palabras ingresadas fueron:" << std::endl;
    for(int i = 0; i < vector3.size(); i++)
    {
        std::cout << vector3[i] << std::endl;
    }

    return 0;
}
