#ifndef COMMUNICATION
#define COMMUNICATION 

float state = 0.0; // state
float Wz = 0.0; // angular.z
float Vx = 0.0; // linear.x
float Vy = 0.0; // linear.y

void readSerialMessage(){
  String s1 = Serial.readStringUntil(','); state = s1.toFloat();// state
  String s2 = Serial.readStringUntil(','); Wz = s2.toFloat(); // angular.z
  String s3 = Serial.readStringUntil(','); Vx = s3.toFloat();// linear.x
  String s4 = Serial.readStringUntil('/n'); Vy = s4.toFloat();// linear.y
}

void printMessage(){
  Serial.print("robot_state: "); Serial.println(state);
  Serial.print("angular.z: "); Serial.println(Wz);
  Serial.print("linear.x: "); Serial.println(Vx);
  Serial.print("linear.y: "); Serial.println(Vy);
}
#endif