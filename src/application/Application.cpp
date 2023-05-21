//
// Created by Daniel on 21.05.2023.
//

#include "Application.h"
IApplicationState *Application::GetState() const
{
  return state_;
}
void Application::SetState(IApplicationState *state)
{
  state_ = state;
}
