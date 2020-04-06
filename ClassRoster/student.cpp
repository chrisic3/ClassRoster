#include <iostream>
#include <string>
#include "student.h"
using namespace std;

Student::Student() {}

Student::Student(string studentID, string firstName, string lastName, string email, int age, int * daysToComplete, Degree degreeType) {
	SetStudentID(studentID);
	SetFirstName(firstName);
	SetLastName(lastName);
	SetEmail(email);
	SetAge(age);
	SetDaysToComplete(daysToComplete);

	return;
}

Student::~Student() {

}

string Student::GetStudentID() {
	return studentID;
}

string Student::GetFirstName() {
	return firstName;
}

string Student::GetLastName() {
	return lastName;
}

string Student::GetEmail() {
	return email;
}

int Student::GetAge() {
	return age;
}

int* Student::GetDaysToComplete() {
	return daysToComplete;
}

Degree Student::GetDegreeType() {
	return degreeType;
}

void Student::SetStudentID(string studentID) {
	this->studentID = studentID;

	return;
}

void Student::SetFirstName(string firstName) {
	this->firstName = firstName;

	return;
}

void Student::SetLastName(string lastName) {
	this->lastName = lastName;

	return;
}

void Student::SetEmail(string email) {
	this->email = email;

	return;
}

void Student::SetAge(int age) {
	this->age = age;
}

void Student::SetDaysToComplete(int *daysToComplete) {
	for (int i = 0; i < 3; ++i) {
		this->daysToComplete[i] = daysToComplete[i];
	}

	return;
}

void Student::SetDegreeType(Degree degreeType) {
	this->degreeType = degreeType;

	return;
}

void Student::print() {
	int* daysToComplete = GetDaysToComplete();

	cout << GetStudentID() << "\tFirst Name: " << GetFirstName() << "\tLast Name: " << GetLastName() << "\tAge: " << GetAge() << "\tDays In Course: {" << daysToComplete[0] << ", "
		<< daysToComplete[1] << ", " << daysToComplete[2] << "}\tDegree Program: " << GetDegreeProgram() << endl;

	return;
}

Degree Student::GetDegreeProgram() {
	return SOFTWARE;
}

