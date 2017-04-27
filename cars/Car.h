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
    Car();
    /*
     * Default destructor
     */
    virtual ~Car();

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

};


#endif //SEP_AG_CAR_H
