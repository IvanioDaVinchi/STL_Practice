#include "VectorHelper.h"
#include <algorithm>
bool comp(std::string f, std::string s)
{
	
}
bool VectorHelper::CompareForWords(Student st1, Student st2)
{
	return st1.Name[0] > st2.Name[0];
}
void VectorHelper::AddNewStudentInVector(std::string name, int age, std::string group)
{
	vect.push_back(Student{ name, age, group });
}

void VectorHelper::InsertArrayInVector(Student* arr, int n)
{
	for (int i = 0; i < n; i++)
	{
		vect.push_back(arr[i]);
	}
}

void VectorHelper::SortVectorByNameStudents()
{
	for (int i = 0; i < vect.size() -1; i++)
	{
		std::sort(vect[i], vect[i+1], CompareForWords);
	}
}

void VectorHelper::SortVectorByAge()
{

}

std::vector<Student> VectorHelper::GetStudentsInVector()
{
	return std::vector<Student>();
}

void VectorHelper::GetStudentsInArray(Student* arr)
{
	for (int i = 0; i < vect.size(); i++)
	{
		arr[i] = vect[i];
	}
}
