// © 2025 Vidyadharan Anbuchezhian
// Licensed under the MIT License — see LICENSE and NOTICE files for details.

#pragma once

class State {
 public:
  State() = default;
  virtual ~State() = default;

  virtual void init() {}
  virtual void running() = 0;
};