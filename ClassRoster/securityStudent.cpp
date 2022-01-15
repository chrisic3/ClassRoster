#include "securityStudent.h"
using namespace std;

SecurityStudent::SecurityStudent(string studentID, string firstName, string lastName, string email, int age, int* daysToComplete, Degree degree) {
	SetStudentID(studentID);
	SetFirstName(firstName);
	SetLastName(lastName);
	SetEmail(email);
	SetAge(age);
	SetDaysToComplete(daysToComplete);
	SetDegreeType(degree);
}

Degree SecurityStudent::GetDegreeProgram() {
	return degreeType;
}