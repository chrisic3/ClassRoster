#include "softwareStudent.h"
using namespace std;

SoftwareStudent::SoftwareStudent(string studentID, string firstName, string lastName, string email, int age, int* daysToComplete, Degree degree) {
	SetDegreeType(degree);
}

Degree SoftwareStudent::GetDegreeProgram() const {
	return degreeType;
}