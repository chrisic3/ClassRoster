#include "networkStudent.h"
using namespace std;

NetworkStudent::NetworkStudent(string studentID, string firstName, string lastName, string email, int age, int* daysToComplete, Degree degree) {
	SetDegreeType(degree);
}

Degree NetworkStudent::GetDegreeProgram() {
	return degreeType;
}