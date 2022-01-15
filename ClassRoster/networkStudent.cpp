#include "networkStudent.h"
using namespace std;

NetworkStudent::NetworkStudent(string studentID, string firstName, string lastName, string email, int age, int* daysToComplete, Degree degree) {
	SetStudentID(studentID);
	SetFirstName(firstName);
	SetLastName(lastName);
	SetEmail(email);
	SetAge(age);
	SetDaysToComplete(daysToComplete);
	SetDegreeType(degree);
}

Degree NetworkStudent::GetDegreeProgram() {
	return degreeType;
}