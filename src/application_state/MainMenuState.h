//
// Created by Daniel on 21.05.2023.
//

#ifndef TANKS_SRC_APPLICATION_STATE_MAINMENUSTATE_H_
#define TANKS_SRC_APPLICATION_STATE_MAINMENUSTATE_H_

#include "../interfaces/IApplicationState.h"
#include "../ui/menu/MainMenuUi.h"

class MainMenuState : public IApplicationState
{
 private:
  MainMenuUi *main_menu_ui_;

 public:
  MainMenuState()
  {
	main_menu_ui_ = new MainMenuUi();
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

#endif //TANKS_SRC_APPLICATION_STATE_MAINMENUSTATE_H_
