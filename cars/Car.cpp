//
// Created by DjordjeR on 27.04.17.
//

#include <iostream>
#include <algorithm>
#include "Car.h"

Car::Car()
{

}
//------------------------------------------------------------------------------
Car::Car(std::string brand, float speed, std::string colour) : brand_(brand),
                                                               speed_(speed),
                                                               colour_(colour)
{

}

Car::~Car()
{

}
//------------------------------------------------------------------------------
void Car::printCars(std::vector<Car> &cars)
{
  for(auto car = cars.begin(); car != cars.end(); car++)
  {
    std::cout << car->getBrand() << ": " << car->getSpeed() << " ("
              << car->getColour() << ")" << std::endl;
  }
}
//------------------------------------------------------------------------------
void Car::sortCars(std::vector<Car> &cars)
{
  // TODO: Implementation
}

//------------------------------------------------------------------------------
void Car::removeDuplicateCars(std::vector<Car> &cars)
{
  for (auto car = cars.begin(); car != cars.end(); car++)
  {
    for(auto sub_car = cars.begin(); sub_car != cars.end(); sub_car++)
      // Comparing every element in the vector with every other, in order to see
      // if there are two equal, we delete the element that we find
    {
      if(*car == *sub_car)
      {
        cars.erase(sub_car);
      }
    }
  }
}
//------------------------------------------------------------------------------
Car::Car(const Car &obj)
{
  brand_ = obj.brand_;
  speed_ = obj.speed_;
  colour_ = obj.colour_;
}
//------------------------------------------------------------------------------
const std::string Car::getBrand()
{
  return brand_;
}
//------------------------------------------------------------------------------
const float Car::getSpeed()
{
  return speed_;
}
//------------------------------------------------------------------------------
const std::string Car::getColour()
{
  return colour_;
}
//------------------------------------------------------------------------------
void Car::setBrand(const std::string brand)
{
  brand_ = brand;
}
//------------------------------------------------------------------------------
void Car::setSpeed(const float speed)
{
  speed_ = speed;
}
//------------------------------------------------------------------------------
void Car::setColour(const std::string colour)
{
  colour_ = colour;
}
//------------------------------------------------------------------------------
void Car::operator=(const Car &obj)
{
  brand_ = obj.brand_;
  speed_ = obj.speed_;
  colour_ = obj.colour_;
}

bool Car::operator==(const Car &obj)
{
  // Two cars are equal if all of their attributes are equal
  return ((brand_.compare(obj.brand_) == 0) && speed_ == obj.speed_&&
      colour_.compare(obj.colour_) == 0);
}
