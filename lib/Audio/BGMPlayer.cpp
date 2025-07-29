// © 2025 Vidyadharan Anbuchezhian
// Licensed under the MIT License — see LICENSE and NOTICE files for details.

#define MINIAUDIO_IMPLEMENTATION
#include "Audio/BGMPlayer.hpp"

#include <iostream>

BGMPlayer::BGMPlayer() {
  if (ma_engine_init(NULL, &engine) != MA_SUCCESS) {
    std::cerr << " Failed to initialize audio engine.\n";
  }
}

BGMPlayer::~BGMPlayer() {
  if (isInitialized) {
    ma_sound_uninit(&bgmSound);
  }
  ma_engine_uninit(&engine);
}

BGMPlayer& BGMPlayer::getInstance() {
  static BGMPlayer instance;
  return instance;
}

void BGMPlayer::init(const char* filename, bool loop) {
  if (isInitialized) {
    ma_sound_uninit(&bgmSound);  // Clean up previous sound
    isInitialized = false;
  }

  ma_result result = ma_sound_init_from_file(
      &engine, filename, MA_SOUND_FLAG_STREAM, NULL, NULL, &bgmSound);

  if (result != MA_SUCCESS) {
    std::cerr << " Failed to load sound: " << filename << "\n";
    return;
  }

  ma_sound_set_looping(&bgmSound, loop ? MA_TRUE : MA_FALSE);
  isInitialized = true;
}

void BGMPlayer::play() {
  if (isInitialized) {
    ma_sound_start(&bgmSound);
  }
}

void BGMPlayer::stop() {
  if (isInitialized) {
    ma_sound_stop(&bgmSound);
  }
}
