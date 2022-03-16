#include "Student.h"
#include <iostream>
using namespace std;
#include <cstring>

// Assign studentId and name
void Student::assignDetails(int ID, char stuName[]) {
  studentId=ID;
  strcpy(name,stuName);
}

// Display StudentId and Name
void Student::display() {
  cout<<studentId<<endl;
  cout<<name<<endl;
}
