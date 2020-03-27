#ifndef SOFTWARESTUDENT_H
#define SOFTWARESTUDENT_H

#include "student.h"
using namespace std;

class SoftwareStudent : public Student {
	public:
		Degree GetDegreeProgram() const;
	private:
		Degree degreeType;
};

#endif