#ifndef MOTORCYCLE_H
#define MOTORCYCLE_H


#include "Vehicle.h"
#include "Road.h"
#include "Car.h"

class Car;
class Motorcycle : public Vehicle {
 private:
  bool isSlowedDown = false;
  bool isSpedUp = false;
  bool shouldCheck = false;
 protected:
 public:

  
  Motorcycle(Road);
  void speedUp();
  void slowDown();
  bool checkFront(Road);
  bool checkBack(Road);
  void sendSignalToCar(Car);
  void startChecks();
  bool getChecks();


};

#endif