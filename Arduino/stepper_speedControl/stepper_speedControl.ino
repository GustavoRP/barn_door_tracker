/*
 * Barn door tracker
 * Gustavo Retuci Pinheiro
 * https://github.com/GustavoRP
 *
 * 28BYJ-48 stepper
 * one revolution per day on 200mm platform, 8/1 reduction and M5-0.8mm curved threaded rod
 *
 */

#include <Stepper.h>

#define STEPS 2048

Stepper stepper(STEPS, 8, 9, 10, 11);

void setup() {
  // one revolution per day.
  //stepper.setSpeed(8.3775);
  stepper.setSpeed(8.72665);
}

void loop() {
  stepper.step(2048);
}


/*
 * 2*pi*200 = 1.256,63706143591729538505mm -> one revolution
 * 1.256,63706143591729538505mm/24h = 0.87266462599716478846184538424431mm/min
 * thread step = 0,8mm
 * gear reduction = 8x
 * nut speed = 0.872664625997/0,8 = 1,090830782496455985577306730305rev/min
 * stepper speed = nut speed * 8 = 8,7266462599716478846184538424431
 */
