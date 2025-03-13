#include <iostream>
#include <string>

using namespace std;

struct Student {
    int studentID;
    string firstName;
    string lastName;
    string course;
    float previousSemesterGPA;
};

int main() {
    const int numStudents = 5;
    Student students[numStudents];

    for (int i = 0; i < numStudents; ++i) {
        cout << "Enter details for student " << i + 1 << ":" << endl;
        cout << "Student ID: ";
        cin >> students[i].studentID;
        cout << "First Name: ";
        cin >> students[i].firstName;
        cout << "Last Name: ";
        cin >> students[i].lastName;
        cout << "Course: ";
        cin >> students[i].course;
        cout << "Previous Semester GPA: ";
        cin >> students[i].previousSemesterGPA;
    }

    cout << "\nStudent Records:\n";
    for (int i = 0; i < numStudents; ++i) {
        cout << "Student " << i + 1 << ":\n";
        cout << "ID: " << students[i].studentID << "\n";
        cout << "Name: "