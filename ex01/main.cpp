#include <iostream>
#include "Timer.hpp"

int main(){
    Timer t(0);
    t.advance(16);
    std::cout << t.elapsedMs() << '\n';
}