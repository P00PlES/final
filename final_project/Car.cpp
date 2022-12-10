#include "Car.h"

Car::Car(Road arg_road) {
    this->currentRoad = arg_road;
    this->isDanger = false;
}

void Car::turnOntoRoad(Road arg_road)
{
    this->currentRoad = arg_road;
}

void Car::inDanger() {
    this->isDanger = true;
}

void Car::outOfDanger() {
    this->isDanger = false;
}

bool Car::getDanger() {
    return this->isDanger;
}

void Car::sendSignaltoBike(Motorcycle arg_bike) {
    arg_bike.startChecks();
}
