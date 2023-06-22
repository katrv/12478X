#include "vex.h"

using namespace vex;

// A global instance of brain used for printing to the V5 brain screen
brain Brain;
competition Competition;
controller Controller1;
motor motorLF = motor(vex::PORT20, vex::gearSetting::ratio6_1, false);
motor motorRF = motor(vex::PORT1, vex::gearSetting::ratio6_1, true);
//motor motorLM = motor(vex::PORT16, vex::gearSetting::ratio6_1, true);
//motor motorRM = motor(vex::PORT16, vex::gearSetting::ratio6_1, true);
motor motorLB = motor(vex::PORT11, vex::gearSetting::ratio6_1, false);
motor motorRB = motor(vex::PORT2, vex::gearSetting::ratio6_1, true);

/**
 * Used to initialize code/tasks/devices added using tools in VEXcode Pro.
 *
 * This should be called at the start of your int main function.
 */
void vexcodeInit(void) {
  // Nothing to initialize
}