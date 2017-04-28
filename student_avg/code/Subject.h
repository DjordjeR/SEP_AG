//
// Created by raja on 28.04.17.
//

#ifndef SEP_AG_SUBJECT_H
#define SEP_AG_SUBJECT_H

#include <string>

class Subject
{
  public:
    /*
     * Constructor
     */
    Subject(std::string name, float grade);
    /*
     * Destructor
     */
    ~Subject();

    /*
     * Getters
     */
    std::string getName();
    float getGrade();
    /*
     * Setters
     */
    void setName(std::string name);
    void setGrade(float grade);

  private:
    /*
     * Holds the name of the subject
     */
    std::string name_;
    /*
     * Holds the grade of the subject
     */
    float grade_;

};


#endif //SEP_AG_SUBJECT_H
