#include "softwareStudent.h"
using namespace std;

SoftwareStudent::SoftwareStudent(string studentID, string firstName, string lastName, string email, int age, int* daysToComplete, Degree degree) {
	SetStudentID(studentID);
	SetFirstName(firstName);
	SetLastName(lastName);
	SetEmail(email);
	SetAge(age);
	SetDaysToComplete(daysToComplete);
	SetDegreeType(degree);
}

Degree SoftwareStudent::GetDegreeProgram() {
	return degreeType;
}