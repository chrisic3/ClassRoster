#ifndef NETWORKSTUDENT_H
#define NETWORKSTUDENT_H

#include "student.h"
using namespace std;

class NetworkStudent : public Student {
	public:
		Degree GetDegreeProgram() const;
	private:
		Degree degreeType;
};

#endif