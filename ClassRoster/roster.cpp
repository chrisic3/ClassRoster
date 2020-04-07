#include <sstream>
#include <iostream>
#include <string>
#include "degree.h"
#include "student.h"
#include "networkStudent.h"
#include "securityStudent.h"
#include "softwareStudent.h"
#include "roster.h"

Roster::Roster() {
    for (int i = 0; i < 5; ++i) {
        classRosterArray[i] = nullptr;
    }
}

Roster::~Roster() {
    delete classRosterArray;
}

void Roster::add(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, Degree degree) {
    int days[3] = { daysInCourse1, daysInCourse2, daysInCourse3 };

    for (int i = 0; i < 5; ++i) {
        if (classRosterArray[i] == nullptr) {
            if (degree == NETWORK) {
                classRosterArray[i] = new NetworkStudent(studentID, firstName, lastName, emailAddress, age, days, degree);
            }
            else if (degree == SECURITY) {
                classRosterArray[i] = new SecurityStudent(studentID, firstName, lastName, emailAddress, age, days, degree);
            }
            else if (degree == SOFTWARE) {
                classRosterArray[i] = new SoftwareStudent(studentID, firstName, lastName, emailAddress, age, days, degree);
            }

            break;
        }
    }

    return;
}

void Roster::remove(string studentID) {
    bool foundStudent = false;

    for (int i = 0; i < 5; ++i) {
        if (classRosterArray[i]->GetStudentID() == studentID) {
            delete classRosterArray[i];
            foundStudent = true;
            break;
        }
    }

    if (!foundStudent) {
        cout << "Student was not found." << endl;
    }

    return;
}

void Roster::printAll() {
    for (int i = 0; i < 5; ++i) {
        classRosterArray[i]->print();
    }

    return;
}

void main() {
    const string studentData[] =
    { "A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY",
    "A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK",
    "A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE",
    "A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY",
    "A5,Chris,Stelly,cstelly@wgu.edu,32,30,30,30,SOFTWARE" };
    
    Roster *classRoster = new Roster();
    Degree studentDegree;

    for (int i = 0; i < 5; ++i) {
        stringstream input(studentData[i]);
        string split[9];

        for (int j = 0; j < 9; ++j) {
            string substring;
            getline(input, substring, ',');
            split[j] = substring;
        }

        if (split[8] == "NETWORK") {
            studentDegree = NETWORK;
        }
        else if (split[8] == "SECURITY") {
            studentDegree = SECURITY;
        }
        else if (split[8] == "SOFTWARE") {
            studentDegree = SOFTWARE;
        }

        classRoster->add(split[0], split[1], split[2], split[3], stoi(split[4]), stoi(split[5]), stoi(split[6]), stoi(split[7]), studentDegree);
    }

    classRoster->printAll();

    //delete classRoster;
}