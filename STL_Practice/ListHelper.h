#pragma once
#include "Student.h"
#include <list>
class ListHelper
{
public:
	void InsertInFrontOfList(Student);

	void InsertInEndOfList(Student);
	void InsertArrayInList(Student *arr, int);

	void DeleteStudent(std::string name);
	std::list<Student> GetListStudents();
private:
	std::list<Student> list;
};

