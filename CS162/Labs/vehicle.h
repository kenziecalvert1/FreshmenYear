#ifndef VEHICLE_H
#define VEHICLE_H

#include <string>
#include <iostream>

using namespace std;

class Vehicle {

   private:
      bool motorized;
      int wheels;
      static const string type;
      int speed;

   public:
      Vehicle();
      bool operator<(const Vehicle &);
      bool operator>(const Vehicle &);

      void setMotorized(bool);
      void setWheels(int);
      void setSpeed(int);

      bool getMotorized();
      int getWheels();
      const string getType();
      int getSpeed();

      const string getVehicle();
      int getDistance();
};


#endif
