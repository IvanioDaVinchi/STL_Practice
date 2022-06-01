#include "VectorHelper.h"
#include <algorithm>
#include <vector>

auto comp_words = [&](Student st1, Student st2) {return st1.Name[0] < st2.Name[0]; };
auto comp_age = [&](Student st1, Student st2) {return st1.age < st2.age; };

bool VectorHelper::comp(std::vector<Student> vec1, std::vector<Student> vec2)
{
	return vec1[0].Name[0] < vec2[0].Name[0];
}
bool VectorHelper::CompareForNumbers(Student st1, Student st2)
{
	return st1.age < st2.age;
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
	std::sort(vect.begin(), vect.end(), comp_words);
}

void VectorHelper::SortVectorByAge()
{
	std::sort(vect.begin(), vect.end(), comp_age);
}

std::vector<Student> VectorHelper::GetStudentsInVector()
{
	return vect;
}

void VectorHelper::GetStudentsInArray(Student* arr)
{
	for (int i = 0; i < vect.size(); i++)
	{
		arr[i] = vect[i];
	}
}

void VectorHelper::DeleteStudentByName(std::string name)
{
	if (!vect.empty())
	{
		for (auto it = vect.begin(); it != vect.end(); it++)
		{
			if ((*it).Name == name)
			{
				vect.erase(it);
				break;
			}
		}
	}
}
