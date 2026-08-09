#pragma once

#include <cmath>

class Vec2{
private:
    float m_x;
    float m_y;

public:
    Vec2(const float x, const float y);
    float x() const;
    float y() const;
    float length() const;
    Vec2 plus(const Vec2& other) const;
    void setX(float x);
    void setY(float y);
};