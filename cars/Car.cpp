//
// Created by DjordjeR on 27.04.17.
//

#include <iostream>
#include "Car.h"

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
    std::cout <<
  }
}
//------------------------------------------------------------------------------
void Car::sortCars(std::vector<Car> &cars)
{

}
//------------------------------------------------------------------------------
void Car::removeDuplicateCars(std::vector<Car> &cars)
{

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
