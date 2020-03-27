#ifndef SECURITYSTUDENT_H
#define SECURITYSTUDENT_H

#include "student.h"
using namespace std;

class SecurityStudent : public Student {
	public:
		Degree GetDegreeProgram() const;
	private:
		Degree degreeType;
};

#endif