//
// Created by Daniel on 21.05.2023.
//

#ifndef BULLSANDCOWS_SRC_UI_COMPONENTS_UI_CONTROLLER_MAINMENUCONTROLLER_H_
#define BULLSANDCOWS_SRC_UI_COMPONENTS_UI_CONTROLLER_MAINMENUCONTROLLER_H_

#include "../../../interfaces/IUpdatableEvents.h"
#include "../../../subject/Subject.h"

#include <iostream>

class MainMenuController : public IUpdatableEvents
{
 public:
  Subject *on_clicked_next;

  MainMenuController();
  ~MainMenuController() = default;

  void UpdateEvents() override;
};

#endif //BULLSANDCOWS_SRC_UI_COMPONENTS_UI_CONTROLLER_MAINMENUCONTROLLER_H_
