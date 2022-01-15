#ifndef SOFTWARESTUDENT_H
#define SOFTWARESTUDENT_H

#include "student.h"
using namespace std;

class SoftwareStudent : public Student {
	public:
		SoftwareStudent(string studentID, string firstName, string lastName, string email, int age, int* daysToComplete, Degree degree);
		Degree GetDegreeProgram();
	private:
		Degree degreeType = SOFTWARE;
};

#endif