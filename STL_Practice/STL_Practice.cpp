#include <iostream>
#include <vector>
#include "Student.h"
#include "VectorHelper.h"
#include "ListHelper.h"
//#include <list>
#include <set>
#include "SetHelper.h"
#include "StructList.h"
#include "DoublyLinkedList.h"

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
//void PrintList(list<Student> list)
//{
//    for (auto it : list)
//    {
//        cout << it.Name << endl;
//        cout << it.age << endl;
//        cout << it.gropupNumber << endl;
//    }
//}
void PrintSetCollection(set<int> s)
{
    for (auto item : s)
    {
        cout << item << endl;
    }
}
void PrintDoubleList(strlist::list **head)
{
    if ((*head) != NULL)
    {
        strlist::list* temp = new strlist::list;
        temp = (*head);
        while (temp->next != NULL)
        {
            cout << temp->value << endl;
            temp = temp->next;
        }
        cout << temp->value << endl;
    }
}
int main()
{
    strlist::list** head = new strlist::list*;
    *head = NULL;
    DoublyLinkedList ll;
    ll.PushFront(head, 1);
    ll.PushBack(head, 2);
    ll.PushBack(head, 5);
    ll.PushFront(head, 3);
    PrintDoubleList(head);
    /*Student students[15] = 
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
    SetHelper setH;
    setH.AddNewElementOnSet(7);
    setH.AddNewElementOnSet(3);
    setH.AddNewElementOnSet(12);
    setH.AddNewElementOnSet(2);
    setH.AddNewElementOnSet(18);
    setH.AddNewElementOnSet(5);
    set<int> s = setH.GetSetCollection();
    PrintSetCollection(s);
    try 
    {
        setH.DeleteElementByValue(12);
        setH.RemoveElementFromBeginToValue(7);
    }
    catch(exception err)
    {
        err.what();
    }
    s = setH.GetSetCollection();
    cout << "**************" << endl;
    PrintSetCollection(s);*/
    //VectorHelper vectH;
    //vectH.InsertArrayInVector(students, 10);
    //vectH.SortVectorByNameStudents();
    //vector<Student> vect = vectH.GetStudentsInVector();
    //PrintVectorElements(vect);
    //PrintArrayOfStudents(students);
}