#ifndef STUDENT_H
#define STUDENT_H

#include <string>
#include "degree.h"
using namespace std;

class Student {
	public:
		Student(string studentID, string firstName, string lastName, string email, int age, int* daysToComplete, Degree degreeTypes);
		~Student();
		string GetStudentID() const;
		string GetFirstName() const;
		string GetLastName() const;
		string GetEmail() const;
		int GetAge() const;
		const int* GetDaysToComplete() const;
		Degree GetDegreeType() const;
		void SetStudentID(string studentID);
		void SetFirstName(string firstName);
		void SetLastName(string lastName);
		void SetEmail(string email);
		void SetAge(int age);
		void SetDaysToComplete(int *daysToComplete);
		void SetDegreeType(Degree degreeType);
		virtual void print() const;
		virtual Degree GetDegreeProgram() const;
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