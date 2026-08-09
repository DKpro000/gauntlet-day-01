#include "Vec2.hpp"
#include <iostream>

int main() {
    Vec2 a(3, 4);
    Vec2 b(1, 2);
    std::cout << "a = (" << a.x() << ", " << a.y() << "), length " << a.length() << std::endl;
    std::cout << "b = (" << b.x() << ", " << b.y() << "), length " << b.length() << std::endl;
    std::cout << "a + b = (" << a.plus(b).x() << ", " << a.plus(b).y() << ")" << std::endl;
    b.setX(10);
    b.setY(2);
    std::cout << "b now (" << b.x() << ", " << b.y() << ")" <<  std::endl;
}
