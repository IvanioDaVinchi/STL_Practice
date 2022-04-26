#include <iostream>
#include "Student.h"

using namespace std;

void PrintArrayOfStudents(Student arr[15])
{
    for (int i = 0; i < 10; i++)
    {
        cout << arr[i].Name << endl;
        cout << arr[i].age << endl;
        cout << arr[i].gropupNumber << endl;
    }
    cout << endl;
}
int main()
{
    Student students[15] = 
    {
        Student{ "Student-1", 16, "G1" },
        Student{ "Student-2", 16, "G1" },
        Student{ "Student-3", 18, "G2" },
        Student{ "Student-4", 17, "G2" },
        Student{ "Student-5", 18, "G3" },
        Student{ "Student-6", 17, "G3" },
        Student{ "Student-7", 19, "G4" },
        Student{ "Student-8", 18, "G4" },
        Student{ "Student-9", 19, "G5" },
        Student{ "Student-10", 20, "G5" }
    };
    PrintArrayOfStudents(students);
}