/*----------------------------------------------------------------------------*/
/*                                                                            */
/*    Module:       main.cpp                                                  */
/*    Author:       katrinaravichandran                                       */
/*    Created:      Sat Jun 17 2023                                           */
/*    Description:  V5 project                                                */
/*                                                                            */
/*----------------------------------------------------------------------------*/

// ---- START VEXCODE CONFIGURED DEVICES ----
// ---- END VEXCODE CONFIGURED DEVICES ----

#include "vex.h"

using namespace vex;

void leftDrive(vex::directionType dir, int velocity, vex::velocityUnits units) {
  motorLF.spin(dir, velocity, units);
  motorLM.spin(dir, velocity, units);
  motorLB.spin(dir, velocity, units);
}

void rightDrive(vex::directionType dir, int velocity, vex::velocityUnits units) {
  motorRF.spin(dir, velocity, units);
  motorRM.spin(dir, velocity, units);
  motorRB.spin(dir, velocity, units);
}

void chassisControl(){
  leftDrive(fwd, Controller1.Axis3.value()+Controller1.Axis1.value(), vex::velocityUnits::pct);
  rightDrive(fwd, Controller1.Axis3.value()-Controller1.Axis1.value(), vex::velocityUnits::pct);
}

void userControl(){
  Controller1.Axis3.changed(*chassisControl);
  Controller1.Axis1.changed(*chassisControl);

  while(1){
    vex::task::sleep(5);
  }
}

int main() {
  // Initializing Robot Configuration. DO NOT REMOVE!
  vexcodeInit();
  Competition.drivercontrol(userControl);
}


