//////////////////////////////////////////////////
//  DIY Sim Shifter - For Arduino Leo/ProMicro  //
//                                              //
//  By Brendan Beavis                           //
//  v1.0                                        //
//////////////////////////////////////////////////

#include <Joystick.h>

//declare our digital input pins on the board
int upPin = 8;
int downPin = 5;

//this is the value of the input from the switches
int Up = 0;
int Down = 0;

void setup() {
  //setup our pins
  pinMode(upPin, INPUT_PULLUP);
  pinMode(downPin, INPUT_PULLUP);

  //setup the joystick library
  Joystick.begin();
}

void loop( ){

  //read our values from the switches to the digital input pins
  Up = digitalRead(upPin);
  Down = digitalRead(downPin);

  //write the value of the input to the joystick buttons.
  Joystick.setButton(0,!Up);
  Joystick.setButton(1,!Down);

  //wait a moment before rechecking the status of the inputs
  delay(50);
}


