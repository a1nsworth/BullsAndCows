//
// Created by Daniel on 21.05.2023.
//

#include "Subject.h"
void Subject::Add(IObserver *observer)
{
  if (observer == nullptr)
	throw std::invalid_argument("observer is nullptr");
}
void Subject::Remove(IObserver *observer)
{
  if (observer == nullptr)
	throw std::invalid_argument("observer is nullptr");
}
void Subject::Notify()
{
  std::for_each(observers_.begin(), observers_.end(), [&](IObserver *observer) { observer->Update(); });
}
