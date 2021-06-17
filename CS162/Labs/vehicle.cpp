#include "vehicle.h"

Vehicle::Vehicle(){

   motorized = true;
   wheels = 4;
   speed = 60;
}

const string Vehicle::type = "Vehicle";

bool Vehicle::operator>(const Vehicle &other){

   if(speed > other.speed){
      return true;
   }
   else{
      return false;
   }
}

bool Vehicle::operator<(const Vehicle &other){

   if(speed < other.speed){
      return true;
   }
   else{
      return false;
   }
}

void Vehicle::setMotorized(bool m){
   motorized = m;
}

void Vehicle::setWheels(int w){
   wheels = w;
}

void Vehicle::setSpeed(int s){
   speed = s;
}

bool Vehicle::getMotorized(){
   return motorized;
}

int Vehicle::getWheels(){
   return wheels;
}

int Vehicle::getSpeed(){
   return speed;
}

const string Vehicle::getVehicle(){
   return type;
}

int Vehicle::getDistance(){

   int time;

   int distance = speed*time;

   return distance;

}
