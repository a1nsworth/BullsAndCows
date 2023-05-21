//
// Created by Daniel on 21.05.2023.
//

#ifndef BULLSANDCOWS_SRC_APPLICATION_APPLICATION_H_
#define BULLSANDCOWS_SRC_APPLICATION_APPLICATION_H_

#include "../interfaces/IApplicationState.h"

class Application
{
 private:
  IApplicationState *state_;

  Application()
  {

  }
  ~Application() = default;

 public:
  Application(const Application &) = delete;
  Application &operator=(const Application &) = delete;

  [[nodiscard]] IApplicationState *GetState() const;
  void SetState(IApplicationState *state);
};

#endif //BULLSANDCOWS_SRC_APPLICATION_APPLICATION_H_
