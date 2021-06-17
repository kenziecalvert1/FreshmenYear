#ifndef RACECAR_H
#define RACECAR_H

#include <string>
#include "vehicle.h"

using namespace std;

class Racecar : public Vehicle {

private:
bool motorized;
int wheels;
static const string type;
int speed;

public:
Racecar();

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
