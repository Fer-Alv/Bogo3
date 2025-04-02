#ifndef CMD_VEL_MOVE
#define CMD_VEL_MOVE

#include "ZMP.h"

void moveRobot_cmd_vel(dynamixel::PortHandler *portHandler, dynamixel::PacketHandler *packetHandler,
               dynamixel::GroupSyncWrite groupSyncWritePos, dynamixel::GroupSyncWrite groupSyncWriteVel, double IDs[18]){

  // float Wz = 0.0; // angular.z
  // float Vx = 1.0; // linear.x
  // float Vy = 0.0; // linear.y
  float t = 0.4;

  double radio = 3.5;
  double x_zmp = min_(7,max_(Vx*t*100,-7));
  double y_zmp = 8.8;

  double giro = min_(PI/16,max_(PI/16,Wz*t*100));

  double step[5] = {1,2,2,2,3}; double s = 5;

  walkSeq_Jacobian(portHandler, packetHandler, groupSyncWritePos, groupSyncWriteVel, IDs, step, s, radio, 0.4, x_zmp, y_zmp, giro);
}
#endif