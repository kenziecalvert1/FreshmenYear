#ifndef BIKE_H
#define BIKE_H

#include <string>
#include "vehicle.h"

using namespace std;

class Bike : public Vehicle{

private:
bool motorized;
int wheels;
static const string type;
int speed;

public:

Bike();

void setMotorized(bool);
void setWheels(int);
void setSpeed(int);

bool getMotorized();
int getWheels();
const string getType();
int getSpeed();

int getDistance();

};


#endif
