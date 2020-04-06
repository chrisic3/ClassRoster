#ifndef NETWORKSTUDENT_H
#define NETWORKSTUDENT_H

#include "student.h"
#include "degree.h"
using namespace std;

class NetworkStudent : public Student {
	public:
		NetworkStudent(string studentID, string firstName, string lastName, string email, int age, int* daysToComplete, Degree degree);
		Degree GetDegreeProgram();
	private:
		Degree degreeType = NETWORK;
};

#endif