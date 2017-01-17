#include <iostream>
#include "student.h"
using namespace std;

Student::Student(string name):name_(name),age_(18) {}

void Student::display(){
	cout << "A student with name " << this->name_ << " and aged " << age_ << " years !" << endl;
}

void Student::setAge(int value){
	age_ = value;
}

