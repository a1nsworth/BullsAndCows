# CMAKE generated file: DO NOT EDIT!
# Generated by CMake Version 3.24
cmake_policy(SET CMP0009 NEW)

# SOURCE_FILES at src/CMakeLists.txt:3 (file)
file(GLOB_RECURSE NEW_GLOB LIST_DIRECTORIES false "D:/Programming/C++/OOP/BullsAndCows/src/*.cpp")
set(OLD_GLOB
  "D:/Programming/C++/OOP/BullsAndCows/src/application/Application.cpp"
  "D:/Programming/C++/OOP/BullsAndCows/src/application_state/GameState.cpp"
  "D:/Programming/C++/OOP/BullsAndCows/src/application_state/MainMenuState.cpp"
  "D:/Programming/C++/OOP/BullsAndCows/src/main.cpp"
  "D:/Programming/C++/OOP/BullsAndCows/src/subject/Subject.cpp"
  "D:/Programming/C++/OOP/BullsAndCows/src/ui/menu/MainMenuUi.cpp"
  )
if(NOT "${NEW_GLOB}" STREQUAL "${OLD_GLOB}")
  message("-- GLOB mismatch!")
  file(TOUCH_NOCREATE "D:/Programming/C++/OOP/BullsAndCows/cmake-build-debug/CMakeFiles/cmake.verify_globs")
endif()

# SOURCE_FILES at src/CMakeLists.txt:3 (file)
file(GLOB_RECURSE NEW_GLOB LIST_DIRECTORIES false "D:/Programming/C++/OOP/BullsAndCows/src/*.h")
set(OLD_GLOB
  "D:/Programming/C++/OOP/BullsAndCows/src/application/Application.h"
  "D:/Programming/C++/OOP/BullsAndCows/src/application_state/GameState.h"
  "D:/Programming/C++/OOP/BullsAndCows/src/application_state/MainMenuState.h"
  "D:/Programming/C++/OOP/BullsAndCows/src/interfaces/IApplicationState.h"
  "D:/Programming/C++/OOP/BullsAndCows/src/interfaces/IObservable.h"
  "D:/Programming/C++/OOP/BullsAndCows/src/interfaces/IObserver.h"
  "D:/Programming/C++/OOP/BullsAndCows/src/subject/Subject.h"
  "D:/Programming/C++/OOP/BullsAndCows/src/ui/menu/MainMenuUi.h"
  )
if(NOT "${NEW_GLOB}" STREQUAL "${OLD_GLOB}")
  message("-- GLOB mismatch!")
  file(TOUCH_NOCREATE "D:/Programming/C++/OOP/BullsAndCows/cmake-build-debug/CMakeFiles/cmake.verify_globs")
endif()
