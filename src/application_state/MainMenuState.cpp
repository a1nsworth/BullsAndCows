//
// Created by Daniel on 21.05.2023.
//

#include "MainMenuState.h"
void MainMenuState::Invoke() {
  application_->SetState(new GameState());
}
MainMenuState::MainMenuState(Application *application) {
  main_menu_ = new MainMenu();
  application_ = application;
}
void MainMenuState::Update() {

}
void MainMenuState::Render() {
  main_menu_->Render();
}
void MainMenuState::UpdateEvents() {
  main_menu_->UpdateEvents();
}
