#ifndef STUDENT_H
#define STUDENT_H

#include <string>
#include "degree.h"
using namespace std;

class Student {
	public:
		Student();
		Student(string studentID, string firstName, string lastName, string email, int age, int* daysToComplete, Degree degreeTypes);
		~Student();
		string GetStudentID();
		string GetFirstName();
		string GetLastName();
		string GetEmail();
		int GetAge();
		int* GetDaysToComplete();
		Degree GetDegreeType();
		void SetStudentID(string studentID);
		void SetFirstName(string firstName);
		void SetLastName(string lastName);
		void SetEmail(string email);
		void SetAge(int age);
		void SetDaysToComplete(int *daysToComplete);
		void SetDegreeType(Degree degreeType);
		virtual void print();
		virtual Degree GetDegreeProgram();
	private:
		string studentID;
		string firstName;
		string lastName;
		string email;
		int age;
		int daysToComplete[3];
		Degree degreeType;
};

#endif