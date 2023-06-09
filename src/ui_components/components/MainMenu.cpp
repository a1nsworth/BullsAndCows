//
// Created by Daniel on 21.05.2023.
//

#include "MainMenu.h"
MainMenu::MainMenu()
{
  main_menu_ui_ = new MainMenuUi();
  main_menu_controller_ = new MainMenuController();
}
void MainMenu::SubscribeToEventContinue(IObserver *observer)
{
  main_menu_controller_->on_clicked_next->Add(observer);
}
void MainMenu::Render()
{
  main_menu_ui_->Render();
}
void MainMenu::UpdateEvents()
{
  main_menu_controller_->UpdateEvents();
}
