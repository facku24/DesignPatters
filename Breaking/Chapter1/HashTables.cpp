#include <map>
#include <iostream>
#include <string>

static const int numStudents = 5;

struct Student
{
    std::string name;
    int id;
};

std::map<int, Student> buildMap(Student (&students)[numStudents])
{
    std::map<int, Student> hashMap;

    for(Student s : students)
    {
        hashMap.insert(std::make_pair(s.id, s));
    }
    return hashMap;
}

int main(int argc, char* argv[])
{
    Student students[numStudents];
    
    for(int i = 0; i < numStudents; i++)
    {
        std::cout << "ingrese nombre: ";
        std::cin >> students[i].name;
        students[i].id = i;
    }

    std::map<int, Student> hashMap = buildMap(students);

    // Creating and using the iterator
    std::map<int, Student>::iterator it = hashMap.begin();
    while( it != hashMap.end())
    {
        std::cout << it->first << " = " << (it->second).name << std::endl;
        it++;    
    }    

    return 0;
}
