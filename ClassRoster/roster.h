#ifndef ROSTER_H
#define ROSTER_H

#include "degree.h"
#include "student.h"
using namespace std;

class Roster {
	public:
		Roster();
		~Roster();
		void add(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, Degree degree);
		void remove(string studentID);
		void printAll();
		void printDaysInCourse(string studentID);
		void printInvalidEmails();
		void printByDegreeProgram(int degreeProgram);
	private:
		Student *classRosterArray[5];
};

#endif