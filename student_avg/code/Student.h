//
// Created by DjordjeR on 28.04.17.
//

#ifndef SEP_AG_STUDENT_H
#define SEP_AG_STUDENT_H


#include <string>
#include <list>
class Student
{
  public:
    /*
     * Constructor that takes name of the student
     */
    Student(std::string name);
    /*
     * Destructor
     */
    ~Student();
    /*
     * Getters
     */
    std::string getName();
    std::list getSubjectList();
    /*
     * Setters
     */
    void setName(const std::string name);
    void setSubjectList(std::list subject_list);


  private:
    /*
     * Holds name of the student
     */
    std::string name_;
    /*
     * Holds the list of subjects
     */
    std::list subject_list_;
};


#endif //SEP_AG_STUDENT_H
