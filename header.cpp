#include "header.h"
#include <iostream>
//методы класса студент
Student::Student()
{
    name = "Default";
    age = 18;
    course = 1;
    group = 1;
}
Student::Student(char *nm)
{
    name = nm;
    age = 18;
    course = 1;
    group = 1;
}
Student::Student(char *nm, int ag, int cr, int gr)
{
    name = nm;
    age = ag;
    course = cr;
    group = gr;
}
void Student::GetStudent()
{
    std::cout << name << "\nAge: "<< age <<"\nCourse: " << course << "\nGroup: " << group << std::endl << std::endl;
}

//методы класса школьник
Schoolboy::Schoolboy()
{
    name = "Default";
    age = 6;
    grade = 1;
}
Schoolboy::Schoolboy(char *nm, int ag, int gd)
{
    name = nm;
    age = ag;
    grade = gd;
}
void Schoolboy::GetSchoolboy()
{
    std::cout << name << "\nAge: " << age << "\nGrade: " << grade << std::endl << std::endl;
}
void Schoolboy::SetSchoolboy(int ag, int gd)
{
    age = ag;
    grade = gd;
}
