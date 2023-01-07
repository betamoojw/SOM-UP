#pragma once
#include "knx.h"
#include "OpenKNX/Module.h"

class SoundControl;
class SoundTrigger : public OpenKNX::Module
{
private:
  // uint32_t calcParamIndex(uint16_t iParamIndex);
  // uint16_t calcKoNumber(uint8_t iKoIndex);
  // int8_t calcKoIndex(uint16_t iKoNumber);
  // GroupObject *getKo(uint8_t iKoIndex);

  void processInputKoTrigger(GroupObject &iKo);
  void processInputKoLock(GroupObject &iKo);
  void processInputKoDayNight(GroupObject &iKo);

  uint8_t mIndex = 0;
  uint16_t mCurrentFile;
  uint8_t mCurrentVolume;
  uint8_t mParamPriority;
  uint8_t mParamLock;
  uint8_t mParamDayNight;
  uint8_t mParamVolumeDay;
  uint8_t mParamVolumeNight;
  uint16_t mParamFileDay;
  uint16_t mParamFileNight;
  uint32_t mParamDuration;

  bool mParamActive = false;
  bool mParamLoop = false;
  bool mCurrentLocked = false;
  bool mStatus = false;

public:
  SoundTrigger(uint8_t iIndex);
  ~SoundTrigger();

  void processInputKo(GroupObject &iKo);
  void setup();
  void loop();
  void lock();
  void unlock();
  void day();
  void night();
  void play();
  void stop();
  void stopped();
  void setStatus(bool iValue);
};