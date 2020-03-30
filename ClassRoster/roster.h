#ifndef ROSTER_H
#define ROSTER_H

#include "student.h"
using namespace std;

class Roster {
	public:
		Student createStudent(string input[]);
	private:
		Student* classRosterArray;
};

#endif