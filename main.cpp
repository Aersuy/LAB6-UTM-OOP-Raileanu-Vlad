#include "progresieAritmetica.cpp"
#include "progresieGeomtrica.cpp"
#include <iostream>
int main()
{
    ProgresiaAritmetica p{2,3};
    ProgresieGeometrica p2{5,6};
    std::cout << p.sumaProgresiei(2) << '\n';
    std::cout << p2.sumaProgresiei(7) << '\n';
    return 0;
}