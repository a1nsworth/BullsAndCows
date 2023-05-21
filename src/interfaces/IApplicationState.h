//
// Created by Daniel on 21.05.2023.
//

#ifndef TANKS_SRC_INTERFACES_IAPPLICATIONSTATE_H_
#define TANKS_SRC_INTERFACES_IAPPLICATIONSTATE_H_

class Application;

class IApplicationState
{
 public:
  virtual void Update(Application *application) = 0;
  virtual void Render(Application *application) = 0;
  virtual void UpdateEvents(Application *application) = 0;
};

#endif //TANKS_SRC_INTERFACES_IAPPLICATIONSTATE_H_
