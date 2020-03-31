#ifndef SECURITYSTUDENT_H
#define SECURITYSTUDENT_H

#include "student.h"
using namespace std;

class SecurityStudent : public Student {
	public:
		SecurityStudent(string studentID, string firstName, string lastName, string email, int age, int* daysToComplete, Degree degree);
		Degree GetDegreeProgram() const;
	private:
		Degree degreeType;
};

#endif