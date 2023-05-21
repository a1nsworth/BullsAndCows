//
// Created by Daniel on 21.05.2023.
//

#ifndef BULLSANDCOWS_SRC_APPLICATION_STATE_MAINMENUSTATE_H_
#define BULLSANDCOWS_SRC_APPLICATION_STATE_MAINMENUSTATE_H_

#include "../ui_components/components/MainMenu.h"
#include "../application_state/GameState.h"
#include "../application/Application.h"

class MainMenuState : public IApplicationState, public IObserver
{
 private:
  Application *application_;

  MainMenu *main_menu_;

  void Invoke() override;
 public:
  explicit MainMenuState(Application *application);
  ~MainMenuState() = default;

  void Update() override;
  void Render() override;
  void UpdateEvents() override;
};

#endif //BULLSANDCOWS_SRC_APPLICATION_STATE_MAINMENUSTATE_H_
