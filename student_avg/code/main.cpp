/*
 * Created by: DjordjeR
 *
 * This is a simple program that does everything that has been writen on the
 * paper for "AG". Please not that many of the check are missing, and errors
 * may rise if program is not used exactly as it's written down on the "AG" paper
 * be free to amend the program add the missing things and experiment.
 *
 * Best of luck!
 */

#include <vector>
#include <algorithm>
#include <iostream>
#include <iterator>
#include <sstream>
#include "Student.h"
#include "Subject.h"

/*
 * Take the student list and find the student with the inputted name
 */
std::vector<Student *>::iterator findStudent(std::vector<Student *>
                                             &student_list, std::string student);

/*
 * Split input into vector
 */
std::vector<std::string> splitInput(std::string const &input);

/*
 * Free allocated memory
 */
void freeMem(std::vector<Student *> student_list);

/*
 * Main program
 */
int main(int argc, char* argv[])
{
  // List of student
  std::vector<Student *> student_list;
  // Input from console
  std::string input;
  // Show command prompt for input
  while (!feof(stdin))
  {
    std::cout << "> ";
    std::getline(std::cin, input); // Get the input
    // Close the program on quit or EOF
    if(input.compare("quit") == 0)
    {
      break;
    }

    // Save all of the input into commands vector
    auto commands = splitInput(input);
    // Check if create is typed in and if number of parameters is in order
    if(commands.at(0).compare("create") == 0 && commands.capacity() == 2)
    {
      student_list.push_back(new Student(commands.at(1)));
    }
    // Check if add is typed in and if number of parameters is in order
    if(commands.at(0).compare("add") == 0 && commands.capacity() == 4)
    {
      // Find the students
      auto student = findStudent(student_list, commands.at(1));
      // Add the subject to the student
      (*student)->getSubjectList()->push_back(new Subject(commands.at(2),
                                                          std::stof(commands.at(3))));
    }
    // Check if show is typed in and if number of parameters is in order
    if(commands.at(0).compare("show") == 0 && commands.capacity() == 1)
    {
      // List all students
      for (auto st = student_list.begin(); st != student_list.end(); st++)
      {
        std::cout << (*st)->getName() << std::endl;
        // List of of the students subjects
        for(auto subj = (*st)->getSubjectList()->begin(); subj !=
            (*st)->getSubjectList()->end(); subj++)
        {
          std::cout << (*subj)->getName() << ": " << (*subj)->getGrade()
                    << std::endl;
        }
      }
    }
    // Check if average is typed in and if number of parameters is in order
    if(commands.at(0).compare("average") == 0 && commands.capacity() == 1)
    {
      for(auto student = student_list.begin(); student != student_list.end();
          student++)
      {
        std::cout << "Grade average of " << (*student)->getName() << ": "
                  << (*student)->averageGrade() << std::endl;
      }
    }
  }

  freeMem(student_list);
  return 0;
}

/*
 * Free memory allocated for students in student list
 */
void freeMem(std::vector<Student *> student_list)
{
  for(auto del = student_list.begin(); del != student_list.end(); del++)
  {
    delete(*del);
  }
}

//http://stackoverflow.com/questions/2275135/splitting-a-string-by-whitespace-in-c
  std::vector<std::string> splitInput(std::string const &input) {
    std::istringstream buffer(input);
    std::vector<std::string> ret((std::istream_iterator<std::string>(buffer)),
                                 std::istream_iterator<std::string>());
    return ret;
  }

/*
 * Find student based on his name
 */
std::vector<Student *>::iterator findStudent(std::vector<Student *>
                                             &student_list, std::string student)
{
  for(auto iterator = student_list.begin(); iterator != student_list.end();
      iterator++)
  {
    if((*iterator)->getName().compare(student) == 0)
    {
      return iterator;
    }
  }
  return student_list.begin();
}
