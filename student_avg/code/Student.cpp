//
// Created by DjordjeR on 28.04.17.
//

#include "Student.h"
#include "Subject.h"
//------------------------------------------------------------------------------
Student::Student(std::string name) : name_(name)
{
  // Initialize the subject list for the student
  subject_list_ = new std::vector<Subject*>;
}
//------------------------------------------------------------------------------
const std::string Student::getName()
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
  // Free reserved memory for subjects
  for(auto del = subject_list_->begin(); del != subject_list_->end(); del++)
  {
    delete(*del);
  }
  delete(subject_list_);
}
//------------------------------------------------------------------------------
std::vector<Subject *>  *Student::getSubjectList()
{
  return subject_list_;
}
//------------------------------------------------------------------------------
void Student::setSubjectList(std::vector<Subject *>  *subject_list)
{
  subject_list_ = subject_list;
}
//------------------------------------------------------------------------------
float Student::averageGrade()
{
  float sum = 0;
  float number_of_subjects = subject_list_->capacity();
  if(subject_list_->capacity() > 0)
  {
    for(auto subject = subject_list_->begin(); subject != subject_list_->end();
        subject++)
    {
      sum += (*subject)->getGrade();
    }
  }
  return sum/number_of_subjects;
}
