// © 2025 Vidyadharan Anbuchezhian
// Licensed under the MIT License — see LICENSE and NOTICE files for details.

#pragma once
#include "Audio/miniaudio.h"

class BGMPlayer {
 public:
  static BGMPlayer& getInstance();

  void init(const char* filename, bool loop = false);
  void play();
  void stop();

  ~BGMPlayer();

 private:
  BGMPlayer();  // Private constructor for singleton
  BGMPlayer(const BGMPlayer&) = delete;
  BGMPlayer& operator=(const BGMPlayer&) = delete;

  ma_engine engine;
  ma_sound bgmSound;
  bool isInitialized = false;
};
