#include "vex.h"

using namespace vex;

// A global instance of brain used for printing to the V5 brain screen
brain Brain;
motor motorLF = motor(vex::PORT16, vex::gearSetting::ratio6_1, true);
motor motorRF = motor(vex::PORT16, vex::gearSetting::ratio6_1, true);
motor motorLM = motor(vex::PORT16, vex::gearSetting::ratio6_1, true);
motor motorRM = motor(vex::PORT16, vex::gearSetting::ratio6_1, true);
motor motorLB = motor(vex::PORT16, vex::gearSetting::ratio6_1, true);
motor motorRB = motor(vex::PORT16, vex::gearSetting::ratio6_1, true);

/**
 * Used to initialize code/tasks/devices added using tools in VEXcode Pro.
 *
 * This should be called at the start of your int main function.
 */
void vexcodeInit(void) {
  // Nothing to initialize
}