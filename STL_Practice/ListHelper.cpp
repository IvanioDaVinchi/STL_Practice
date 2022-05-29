#include "ListHelper.h"
#include <list>

void ListHelper::InsertInFrontOfList(Student st)
{
	list.push_front(st);
}

void ListHelper::InsertInEndOfList(Student st)
{
	list.push_back(st);
}

void ListHelper::InsertArrayInList(Student* arr, int n)
{
	for (int i = 0; i < n; i++)
	{
		list.push_back(arr[i]);
	}
}

void ListHelper::DeleteStudent(std::string name)
{
	if (!list.empty())
	{
		for (auto iter = list.begin(); iter != list.end(); iter++)
		{
			if ((*iter).Name == name)
			{
				list.erase(iter);
			}
		}
	}
}

std::list<Student> ListHelper::GetListStudents()
{
	return list;
}
