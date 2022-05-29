#include <iostream>
#include <vector>
#include "Student.h"
#include "VectorHelper.h"
#include "ListHelper.h"
#include <list>

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
void PrintVectorElements(vector<Student> vector)
{
    for (int i = 0; i < vector.size(); i++)
    {
        cout << vector[i].Name << endl;
        cout << vector[i].age << endl;
        cout << vector[i].gropupNumber << endl;
    }
}
void PrintList(list<Student> list)
{
    for (auto it : list)
    {
        cout << it.Name << endl;
        cout << it.age << endl;
        cout << it.gropupNumber << endl;
    }
}
int main()
{
    Student students[15] = 
    {
        Student{ "aStudent-1", 16, "G1" },
        Student{ "dStudent-2", 16, "G1" },
        Student{ "dStudent-3", 18, "G2" },
        Student{ "bStudent-4", 17, "G2" },
        Student{ "cStudent-5", 18, "G3" },
        Student{ "aStudent-6", 17, "G3" },
        Student{ "cStudent-7", 19, "G4" },
        Student{ "dStudent-8", 18, "G4" },
        Student{ "bStudent-9", 19, "G5" },
        Student{ "xStudent-10", 20, "G5" }
    };
    ListHelper listH;
    listH.InsertArrayInList(students, 10);
    list<Student> list = listH.GetListStudents();
    PrintList(list);
    //VectorHelper vectH;
    //vectH.InsertArrayInVector(students, 10);
    //vectH.SortVectorByNameStudents();
    //vector<Student> vect = vectH.GetStudentsInVector();
    //PrintVectorElements(vect);
    //PrintArrayOfStudents(students);
}