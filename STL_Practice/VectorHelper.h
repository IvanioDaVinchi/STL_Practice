#pragma once
#include <vector>
#include "Student.h"

class VectorHelper
{
	public:
		bool comp(std::vector<Student>, std::vector<Student>);
		bool CompareForNumbers(Student, Student);
		void AddNewStudentInVector(std::string, int, std::string);
		
		void InsertArrayInVector(Student* arr, int);
		
		void SortVectorByNameStudents();
		
		void SortVectorByAge();

		std::vector<Student> GetStudentsInVector();

		void GetStudentsInArray(Student *arr);
		void DeleteStudentByName(std::string);
	private:
		std::vector<Student> vect;
};