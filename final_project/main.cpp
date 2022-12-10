#include "Vehicle.h"
#include "Road.h"
#include "Car.h"
#include "Truck.h"
#include "Motorcycle.h"
int
main(int argc, char *argv[])
{
    //create Road objects for the various vehicles. The parameters determine whether or not the space ahead or behind is available for
    //the vehicle to speed up or slow down. These values can be changed to result in different outcomes. All false means the car will stay middle and get hit by the
    //truck's debris.
    Road leftRoad (false, false);
    Road middleRoad (false, false);
    //this road has space behind, therefore later in the program the right motorcycle will slow down to make space for the car.
    Road rightRoad (false,true);
    //create a truck object that is on the middle road.
    Truck middleTruck (middleRoad);
    //create a car object that is also on the middle road.
    Car middleCar (middleRoad);
    //create a left motorcycle object on the left road
    Motorcycle leftBike (leftRoad);
    //create a right motorcycle object on the right road.
    Motorcycle rightBike (rightRoad);

    //sends a signal to the middleCar that the debris is coming towards the car.
    middleTruck.sendSignal(middleCar);
    //sends a signal to the leftBike to check if there is available space for the bike to move and the car to turn onto the left road.

    middleCar.sendSignaltoBike(leftBike);
        //if there is space in front of the bike on the given road, speed up out of the way and send signal to car to turn
        bool test = leftBike.checkFront(leftRoad);
            std::cout << test << std::endl;
        if (leftBike.checkFront(leftRoad) == true) {
            leftBike.speedUp();
            leftBike.sendSignalToCar(middleCar);
            std::cout << "Bike sped up, and the Car turned into left lane successfully. Accident avoided.\n" << std::endl;
        }
        //if there is space behind the bike on the given road, slow down out of the way and send signal to car to turn
        else if (leftBike.checkBack(leftRoad) == true) {
            leftBike.slowDown();
            leftBike.sendSignalToCar(middleCar);
            std::cout << "Bike slowed down, and the Car turned into left lane successfully. Accident avoided.\n" << std::endl;
        }
    //if the car is still in danger, send a signal to the other bike.
    if (middleCar.getDanger()) {
        //send a signal to the right motorcycle to begin checking
        middleCar.sendSignaltoBike(rightBike);
        //if the signal was recieved, begin checks
        if (rightBike.getChecks()) {
            // check the space in front of the bike on given road. If there is space, speed up and send signal to car to turn
            if (rightBike.checkFront(rightRoad)) {
                rightBike.speedUp();
                rightBike.sendSignalToCar(middleCar);
              std::cout << "Bike sped up, and the Car turned into right lane successfully. Accident avoided.\n" << std::endl;
            }
            else if (rightBike.checkBack(rightRoad)) {
                rightBike.slowDown();
                rightBike.sendSignalToCar(middleCar);
              std::cout << "Bike slowed down, and the Car turned into right lane successfully. Accident avoided.\n" << std::endl;
            }
        }
    }
    if (middleCar.getDanger() == true) {
        std::cout << "No space available for Car to turn. Car will stay steady to avoid harming motorcyclists. Accident inbound.\n" << std::endl;
    }
}