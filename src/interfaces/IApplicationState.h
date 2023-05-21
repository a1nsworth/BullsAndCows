//
// Created by Daniel on 21.05.2023.
//

#ifndef BULLSANDCOWS_SRC_INTERFACES_IAPPLICATIONSTATE_H_
#define BULLSANDCOWS_SRC_INTERFACES_IAPPLICATIONSTATE_H_

#include "IUpdatableEvents.h"
#include "IRendered.h"
#include "IUpdatable.h"

class IApplicationState : public IUpdatableEvents, public IRendered, public IUpdatable {};

#endif //BULLSANDCOWS_SRC_INTERFACES_IAPPLICATIONSTATE_H_
