//
// Created by DjordjeR on 27.04.17.
//

#ifndef SEP_AG_CAR_H
#define SEP_AG_CAR_H

#include <vector>

/*
 * Car class
 */
class Car
{
  public:
    /*
     * Default constructor
     */
    Car(std::string brand, float speed, std::string colour);
    /*
     * Copy constructor
     */
    Car(const Car &obj);
    /*
     * Default destructor
     */
    virtual ~Car();
    /*
     * Getters
     */
    const std::string getBrand();
    const float getSpeed();
    const std::string getColour();
    /*
     * Setters
     */
    void setBrand(const std::string brand);
    void setSpeed(const float speed);
    void setColour(const std::string colour);
    /*
     * Print list (vector) of cars
     */
    void printCars(std::vector<Car> &cars);
    /*
     * Sort cars
     */
    void sortCars(std::vector<Car> &cars);
    /*
     * Remove duplicate cars
     */
    void removeDuplicateCars(std::vector<Car> &cars);

  private:
    std::string brand_;
    float speed_;
    std::string colour_;
};


#endif //SEP_AG_CAR_H
