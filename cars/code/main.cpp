#include <iostream>
#include <fstream>
#include "Car.h"
int main(int argc, char* argv[])
{
  std::string file_name;
  std::vector<Car> list;
  Car cars;
  std::string brand;
  float speed;
  std::string colour;

  /*
   * Check if program was called correctly
   */
  if(argc < 2)
  {
    std::cout << "Usage: ./cars <car file>" << std::endl;
    return -1; // Error
  }
  file_name = argv[1];

  std::ifstream input_file(file_name);
  while (input_file >> brand >> speed >> colour)
  {
    list.push_back(Car(brand, speed, colour)); // Crate list
  }
  cars.printCars(list); // Print out cars
  cars.removeDuplicateCars(list); //

  return 0;
}