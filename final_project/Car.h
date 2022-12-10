#ifndef CAR_H
#define CAR_H

#include "Vehicle.h"
#include "Motorcycle.h"
#include "Road.h"
 class Motorcycle;

class Car : public Vehicle {
 private:
  bool isDanger;
 protected:
 public:

  void turnOntoRoad(Road);
  void inDanger();
  void outOfDanger();
  void sendSignaltoBike(Motorcycle);
  bool getDanger();

  Car(Road);

};

#endif