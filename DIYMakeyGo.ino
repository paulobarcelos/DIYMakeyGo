#include "Quirkbot.h"
#include "CapacitativeTouch.h"
#include "MousePress.h"

CapacitativeTouch sensorMouse;
CapacitativeTouch sensorSpace;
CapacitativeTouch sensorLeft;
CapacitativeTouch sensorRight;

MousePress mousePress;
KeyPress keySpace;
KeyPress keyLeft;
KeyPress keyRight;

SerialMonitor monitor;
void start() {
  Bot::serialReportEnabled = false;

  sensorMouse.place = 6;
  sensorSpace.place = 7;
  sensorLeft.place = 8;
  sensorRight.place = 9;

  mousePress.trigger.connect(sensorMouse.out);
  
  keySpace.key = KEY_SPACE;
  keySpace.trigger.connect(sensorSpace.out);
  
  keyLeft.key = KEY_LEFT;
  keyLeft.trigger.connect(sensorLeft.out);
  
  keyRight.key = KEY_RIGHT;  
  keyRight.trigger.connect(sensorRight.out);
  
  monitor.items[0].connect(sensorMouse.out);
  monitor.items[1].connect(sensorSpace.out);
  monitor.items[2].connect(sensorLeft.out);
  monitor.items[3].connect(sensorRight.out);
}
