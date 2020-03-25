#include <iostream>
#include <string>
#include "student.h"
using namespace std;

Student::Student(string studentID, string firstName, string lastName, string email, int age, int daysToComplete[3], Degree degreeTypes) {
	this->studentID = studentID;
	this->firstName = firstName;
	this->lastName = lastName;
	this->email = email;
	this->age = age;
	this->daysToComplete[3] = daysToComplete[3];
	this->degreeTypes = degreeTypes;

	return;
}

string Student::GetStudentID() const {
	return studentID;
}

void Student::SetStudentID(string studentID) {
	this->studentID = studentID;

	return;
}

string Student::GetFirstName() const {
	return firstName;
}

void Student::SetFirstName(string firstName) {
	this->firstName = firstName;

	return;
}

string Student::GetLastName() const {
	return lastName;
}

void Student::SetLastName(string lastName) {
	this->lastName = lastName;

	return;
}

string Student::GetEmail() const {
	return email;
}

void Student::SetEmail(string email) {
	this->email = email;

	return;
}

int Student::GetAge() const {
	return age;
}

void Student::SetAge(int age) {
	this->age = age;
}

int* Student::GetDaysToComplete() const {
	return daysToComplete;
}

void Student::SetDaysToComplete(int daysToComplete[])
{
}

void Student::print() const
{
}

