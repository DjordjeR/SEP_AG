//
// Created by DjordjeR on 28.04.17.
//

#include "Student.h"
//------------------------------------------------------------------------------
Student::Student(std::string name) : name_(name)
{

}
//------------------------------------------------------------------------------
std::string Student::getName()
{
  return name_;
}
//------------------------------------------------------------------------------
void Student::setName(std::string name)
{
  name_ = name;
}
//------------------------------------------------------------------------------
Student::~Student()
{

}
//------------------------------------------------------------------------------
std::list Student::getSubjectList()
{
  return subject_list_;
}
//------------------------------------------------------------------------------
void Student::setSubjectList(std::list subject_list)
{
  subject_list_ = subject_list;
}
