#include "Timer.hpp"

void Timer::advance(int deltaMs){ m_elapsedMs += deltaMs; }
int Timer::elapsedMs() const{ return m_elapsedMs; }