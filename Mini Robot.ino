/**
 * \par Copyright (C), 2012-2016, MakeBlock
 * @file    DCMotorDriverTest.ino
 * @author  MakeBlock
 * @version V1.0.0
 * @date    2015/09/09
 * @brief   Description: this file is sample code for Me DC motor device.
 *
 * Function List:
 *    1. void MeDCMotor::run(int16_t speed)
 *    2. void MeDCMotor::stop(void)
 *
 * \par History:
 * <pre>
 * <Author>     <Time>        <Version>      <Descr>
 * Mark Yan     2015/09/09    1.0.0          rebuild the old lib
 * </pre>
 */
#include "MeMegaPi.h"

MeMegaPiDCMotor motor1(PORT1B); //THis is port 1

MeMegaPiDCMotor motor2(PORT2B); // This is Port 2. 

MeMegaPiDCMotor motor3(PORT3B); 

//MeMegaPiDCMotor motor4(PORT1A); //Not port 1 or 2


uint8_t motorSpeed = 150;
uint8_t Armspeed = 100;

void setup()
{
}

void loop()
{

  motor1.run(motorSpeed); /* value: between -255 and 255. */
  motor2.run(motorSpeed); /* value: between -255 and 255. */
  motor3.run(100);
  //motor4.run(motorSpeed);
  delay(2000);
  motor1.stop();
  motor2.stop();
  motor3.stop();
  //motor4.stop();
  delay(100);
  motor1.run(-motorSpeed);
  motor2.run(-motorSpeed);
  motor3.run(-Armspeed);
  //motor4.run(-motorSpeed);
  delay(2000);
  motor1.stop();
  motor2.stop();
  motor3.stop();
  //motor4.stop();
  delay(2000);
}

