#include "student.h"
#include "student_master.h"

int main(int argc, char *argv[]) {

   Student s("Joe");
   s.setAge(25);
   s.display();

   Student *another;
   another = new Student("Bill");
   another->setAge(32);
   another->display();
 
   Student_Master stud_master("Joan");
   stud_master.display();

   delete another;

   return 0;
}
