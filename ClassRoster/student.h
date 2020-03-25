#ifndef STUDENT_H
#define STUDENT_H

#include <string>
#include "degree.h"
using namespace std;

class Student
{
	public:
		Student(string studentID, string firstName, string lastName, string email, int age, int daysToComplete[3], Degree degreeTypes);
		~Student();
		string GetStudentID() const;
		void SetStudentID(string studentID);
		string GetFirstName() const;
		void SetFirstName(string firstName);
		string GetLastName() const;
		void SetLastName(string lastName);
		string GetEmail() const;
		void SetEmail(string email);
		int GetAge() const;
		void SetAge(int age);
		int* GetDaysToComplete() const;
		void SetDaysToComplete(int daysToComplete[]);
		virtual void print() const;
		virtual Degree GetDegreeProgram() const;
	private:
		string studentID;
		string firstName;
		string lastName;
		string email;
		int age;
		int daysToComplete[3];
		Degree degreeTypes;
};

#endif