#pragma once

class Timer {
public:
    Timer(int startMs) : m_elapsedMs(startMs) {}
    void advance(int deltaMs);
    int elapsedMs() const;
private:
    int m_elapsedMs;
};