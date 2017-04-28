//
// Created by raja on 28.04.17.
//

#include "Subject.h"
//------------------------------------------------------------------------------
Subject::Subject(std::string name, float grade) : name_(name), grade_(grade)
{

}
//------------------------------------------------------------------------------
Subject::~Subject()
{

}
//------------------------------------------------------------------------------
std::string Subject::getName()
{
  return name_;
}
//------------------------------------------------------------------------------
float Subject::getGrade()
{
  return grade_;
}
//------------------------------------------------------------------------------
void Subject::setName(std::string name)
{
  name_ = name;
}
//------------------------------------------------------------------------------
void Subject::setGrade(float grade)
{
  grade_ = grade;
}
