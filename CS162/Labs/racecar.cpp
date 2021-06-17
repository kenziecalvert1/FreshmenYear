#include "racecar.h"

Racecar::Racecar(){

motorized = true;
wheels = 4;
speed = 100;
}

const string Racecar::type = "Racecar";

void Racecar::setMotorized(bool m){
motorized = m;
}

void Racecar::setWheels(int w){
wheels = w;
}

void Racecar::setSpeed(int s){
speed = s;
}

bool Racecar::getMotorized(){
return motorized;
}

int Racecar::getWheels(){
return wheels;
}

const string Racecar::getType(){
return type;
}

int Racecar::getSpeed(){
return speed;
}

int Racecar::getDistance(){

int time = 0;
cout << "Time for racecar? : " << endl;
cin >> time;
int distance = Vehicle::getDistance();

return distance;
}
