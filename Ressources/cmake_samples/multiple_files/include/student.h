#ifndef STUDENT_H
#define STUDENT_H

#include <string>

class Student {
protected:
	std::string name_;
	int age_;
public:
	Student(std::string);
	virtual void display();
	int getAge() { return age_; }
	void setAge(int value);
	
};

#endif
