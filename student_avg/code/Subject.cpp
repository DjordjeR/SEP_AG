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
const std::string Subject::getName()
{
  return name_;
}
//------------------------------------------------------------------------------
const float Subject::getGrade()
{
  return grade_;
}
//------------------------------------------------------------------------------
void Subject::setName(const std::string name)
{
  name_ = name;
}
//------------------------------------------------------------------------------
void Subject::setGrade(const float grade)
{
  grade_ = grade;
}
//------------------------------------------------------------------------------
Subject::Subject(const Subject &obj)
{
  name_ = obj.name_;
  grade_ = obj.grade_;
}
