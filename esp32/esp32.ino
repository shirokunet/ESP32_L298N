#include "esp32_l298n.h"

ESP32_L298N motor_yaw = ESP32_L298N(A18, A19, 0, 1, true);
ESP32_L298N motor_boom = ESP32_L298N(A5, A4, 2, 3, true);
ESP32_L298N motor_arm = ESP32_L298N(A11, A10, 4, 5, true);
ESP32_L298N motor_backet = ESP32_L298N(A12, A13, 6, 7, true);
ESP32_L298N motor_left = ESP32_L298N(18, 5);
ESP32_L298N motor_right = ESP32_L298N(16, 17);

void setup()
{
  motor_yaw.standby();
  motor_boom.standby();
  motor_arm.standby();
  motor_backet.standby();
  motor_left.standby();
  motor_right.standby();
}

void loop()
{
  motor_yaw.test();
  motor_boom.test();
  motor_arm.test();
  motor_backet.test();
  motor_left.test();
  motor_right.test();
}