#pragma once
#include <vector>
#include "Student.h"

class VectorHelper
{
	public:
		bool CompareForWords(Student, Student);
		void AddNewStudentInVector(std::string, int, std::string);
		
		void InsertArrayInVector(Student* arr, int);
		
		void SortVectorByNameStudents();
		
		void SortVectorByAge();

		std::vector<Student> GetStudentsInVector();

		void GetStudentsInArray(Student *arr);
	private:
		std::vector<Student> vect;
};