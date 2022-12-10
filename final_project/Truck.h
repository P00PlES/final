#ifndef TRUCK_H
#define TRUCK_H


#include "Vehicle.h"
#include "Road.h"
#include "Car.h"

class Truck : public Vehicle {
 private:
 protected:
 public:

  void sendSignal(Car);

  Truck(Road);
};

#endif