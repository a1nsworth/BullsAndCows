//
// Created by Daniel on 21.05.2023.
//

#include "MainMenuController.h"
void MainMenuController::UpdateEvents() {
  std::cout << "Input <next> for continue\n";
  static std::string s;

  std::cin >> s;
  if (s == "next")
  {
	on_clicked_next->Notify();
  } else
  {
	UpdateEvents();
  }
}
MainMenuController::MainMenuController() {
  on_clicked_next = new Subject();
}
