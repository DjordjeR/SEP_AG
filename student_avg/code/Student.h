//
// Created by DjordjeR on 28.04.17.
//

#ifndef SEP_AG_STUDENT_H
#define SEP_AG_STUDENT_H


#include <string>
#include <vector>
class Subject;

/*
 * Student class, holds the information about the student. Calculates average.
 */
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
    virtual ~Student();
    /*
     * Getters
     */
    const std::string getName();
    std::vector<Subject *>  *getSubjectList();
    /*
     * Setters
     */
    void setName(const std::string name);
    void setSubjectList( std::vector<Subject *>  *subject_list);

    /*
     * Calculate average for the student
     */
    float averageGrade();

  private:
    /*
     * Private copy constructor
     */
    Student(const Student &obj);
    /*
     * Private assignment operator
     */
    Student &operator=(const Student &obj);
    /*
     * Holds name of the student
     */
    std::string name_;
    /*
     * Holds the list of subjects
     */
    std::vector<Subject *> *subject_list_;
};


#endif //SEP_AG_STUDENT_H
