#include <iostream>
#include <cmath>
#include <conio.h>

/*
    Source by CPPReference
    Modified For Learn by RK
    I.D.E : VS2019
*/

int main(void) {
    std::cout << std::showpos
        << "copysign(1.0,+2.0) = " << std::copysign(1.0, +2.0) << '\n'
        << "copysign(1.0,-2.0) = " << std::copysign(1.0, -2.0) << '\n'
        << "copysign(inf,-2.0) = " << std::copysign(INFINITY, -2.0) << '\n'
        << "copysign(NaN,-2.0) = " << std::copysign(NAN, -2.0) << '\n';

    _getch();
    return 0;
}