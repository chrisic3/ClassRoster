#include "securityStudent.h"
using namespace std;

SecurityStudent::SecurityStudent(string studentID, string firstName, string lastName, string email, int age, int* daysToComplete, Degree degree) {
	SetDegreeType(degree);
}

Degree SecurityStudent::GetDegreeProgram() const {
	return degreeType;
}