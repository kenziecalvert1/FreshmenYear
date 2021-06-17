#ifndef SKATEBOARD_H
#define SKATEBOARD_H

#include <string>
#include "vehicle.h"

using namespace std;

class Skateboard : public Vehicle {

   private:
      bool motorized;
      int wheels;
      static const string type;
      int speed;

   public:

      Skateboard();

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
