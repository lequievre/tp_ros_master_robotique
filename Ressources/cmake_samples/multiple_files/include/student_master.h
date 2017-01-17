#ifndef STUDENT_MASTER_H
#define STUDENT_MASTER_H

#include "student.h"
#include <string>

class Student_Master : public Student {
private:
	std::string ros_version_;
public:
	Student_Master(std::string);
	void display();
};

#endif
