//
// Created by raja on 28.04.17.
//

#ifndef SEP_AG_SUBJECT_H
#define SEP_AG_SUBJECT_H

#include <string>

/*
 * Subject class, to hold the information about the students subjects
 */
class Subject
{
  public:
    /*
     * Constructor
     */
    Subject(std::string name, float grade);
    /*
     * Copy constructor
     */
    Subject(const Subject &obj);
    /*
     * Destructor
     */
    virtual ~Subject();
    /*
     * Getters
     */
    const std::string getName();
    const float getGrade();
    /*
     * Setters
     */
    void setName(const std::string name);
    void setGrade(const float grade);

  private:
    /*
     * Holds the name of the subject
     */
    std::string name_;
    /*
     * Holds the grade of the subject
     */
    float grade_;
    /*
     * Overloading = operator
     */
    Subject &operator=(const Subject &obj);
};


#endif //SEP_AG_SUBJECT_H
