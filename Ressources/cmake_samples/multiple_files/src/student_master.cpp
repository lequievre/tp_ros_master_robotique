#include <iostream>
#include "student_master.h"
using namespace std;

Student_Master::Student_Master(string name):Student(name),ros_version_("indigo") {}

void Student_Master::display(){
	cout << "A student of Master with name " << this->name_ << " and aged " << age_ << " years ! " << "This student knows the version of ros : " << ros_version_ << endl;
}

