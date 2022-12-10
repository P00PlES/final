#include "Truck.h"

Truck::Truck(Road arg_road) {
    this->currentRoad = arg_road;
}

void Truck::sendSignal (Car arg_car) {
    arg_car.inDanger();
}