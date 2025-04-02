#ifndef ONE_TIME_ALGRTHM
#define ONE_TIME_ALGRTHM

#include "B3_POS.h"
#include "B3_ROBOT_MOVE.h"



void Stand_Up_FaceUp(dynamixel::PortHandler *portHandler, dynamixel::PacketHandler *packetHandler,
                   dynamixel::GroupSyncWrite groupSyncWritePos, dynamixel::GroupSyncWrite groupSyncWriteVel,
                   double IDs[18]){
  //  ------------------------------- P O S E S       P A R A R       B O C A         A R R I B A---------------------------------------------------------------
  moveRobot_byQVals(portHandler,packetHandler,groupSyncWritePos,groupSyncWriteVel,IDs,pose_Acostado);
  moveRobot_byQVals(portHandler,packetHandler,groupSyncWritePos,groupSyncWriteVel,IDs,pose_Rodillas_Arriba);
  moveRobot_byQVals(portHandler,packetHandler,groupSyncWritePos,groupSyncWriteVel,IDs,pose_Baja_Rodillas);
  moveRobot_byQVals(portHandler,packetHandler,groupSyncWritePos,groupSyncWriteVel,IDs,pose_Sube_Torso);
  moveRobot_byQVals(portHandler,packetHandler,groupSyncWritePos,groupSyncWriteVel,IDs,pose_sube_pelvis);
  moveRobot_byQVals(portHandler,packetHandler,groupSyncWritePos,groupSyncWriteVel,IDs,pose_sube_pelvis_2);
  moveRobot_byQVals(portHandler,packetHandler,groupSyncWritePos,groupSyncWriteVel,IDs,pose_se_sienta);
  // for(int p=0; p<siz_pos_arriba;p++){
  //   moveRobot_byQVals(portHandler,packetHandler,groupSyncWritePos,groupSyncWriteVel,IDs,poses_boca_arriba[p]);
  // }
  moveRobot_byPose(portHandler,packetHandler,groupSyncWritePos,groupSyncWriteVel,IDs,p2);

}

void Stand_Up_FaceDown(dynamixel::PortHandler *portHandler, dynamixel::PacketHandler *packetHandler,
                   dynamixel::GroupSyncWrite groupSyncWritePos, dynamixel::GroupSyncWrite groupSyncWriteVel,
                   double IDs[18]){
  //--------------------------------- P O S E S       P A R A R         B O C A       A B A J O------------------------------------------------------------
  moveRobot_byQVals(portHandler,packetHandler,groupSyncWritePos,groupSyncWriteVel,IDs,pose_boca_abajo_0);
  moveRobot_byQVals(portHandler,packetHandler,groupSyncWritePos,groupSyncWriteVel,IDs,pose_boca_abajo_1);
  moveRobot_byQVals(portHandler,packetHandler,groupSyncWritePos,groupSyncWriteVel,IDs,pose_boca_abajo_2);
  moveRobot_byQVals(portHandler,packetHandler,groupSyncWritePos,groupSyncWriteVel,IDs,pose_boca_abajo_3);
  moveRobot_byQVals(portHandler,packetHandler,groupSyncWritePos,groupSyncWriteVel,IDs,pose_boca_abajo_4);
  moveRobot_byQVals(portHandler,packetHandler,groupSyncWritePos,groupSyncWriteVel,IDs,pose_boca_abajo_5);
  moveRobot_byQVals(portHandler,packetHandler,groupSyncWritePos,groupSyncWriteVel,IDs,pose_boca_abajo_6);
  moveRobot_byQVals(portHandler,packetHandler,groupSyncWritePos,groupSyncWriteVel,IDs,pose_boca_abajo_7);
  moveRobot_byQVals(portHandler,packetHandler,groupSyncWritePos,groupSyncWriteVel,IDs,pose_boca_abajo_8);
  moveRobot_byQVals(portHandler,packetHandler,groupSyncWritePos,groupSyncWriteVel,IDs,pose_boca_abajo_9);
  moveRobot_byQVals(portHandler,packetHandler,groupSyncWritePos,groupSyncWriteVel,IDs,pose_boca_abajo_10);
  moveRobot_byQVals(portHandler,packetHandler,groupSyncWritePos,groupSyncWriteVel,IDs,pose_boca_abajo_11);
  moveRobot_byQVals(portHandler,packetHandler,groupSyncWritePos,groupSyncWriteVel,IDs,pose_boca_abajo_12);
  // for(int p=0; p<siz_pos_abajo;p++){
  //   moveRobot_byQVals(portHandler,packetHandler,groupSyncWritePos,groupSyncWriteVel,IDs,poses_boca_abajo[p]);
  // }
  moveRobot_byPose(portHandler,packetHandler,groupSyncWritePos,groupSyncWriteVel,IDs,p2);
}

#endif