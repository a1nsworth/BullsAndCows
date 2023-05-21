//
// Created by Daniel on 21.05.2023.
//

#ifndef BULLSANDCOWS_SRC_APPLICATION_STATE_MAINMENUSTATE_H_
#define BULLSANDCOWS_SRC_APPLICATION_STATE_MAINMENUSTATE_H_

#include "../interfaces/IApplicationState.h"
#include "../ui_components/components/MainMenu.h"

class MainMenuState : public IApplicationState, public IObserver
{
 private:
  MainMenu *main_menu_ui_;

  void Update() override
  {

  }
 public:
  MainMenuState()
  {
//	main_menu_ui_ = new MainMenuUi();
  }

  ~MainMenuState() = default;

  void Update(Application *application) override
  {

  }
  void Render(Application *application) override
  {
	main_menu_ui_->Render();
  }
  void UpdateEvents(Application *application) override
  {

  }
};

#endif //BULLSANDCOWS_SRC_APPLICATION_STATE_MAINMENUSTATE_H_
