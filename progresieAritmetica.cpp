#include "progresie.hpp"
#pragma once
#include <iostream>
class ProgresiaAritmetica : public Progresia {
private:
    double primulTermen;  
    double diferenta;  

public:
     ProgresiaAritmetica(double p, double d)
        : primulTermen(p), diferenta(d) {}

    double sumaProgresiei(int n) override 
    {
        double ultimulTermen = primulTermen + (n - 1) * diferenta; // an = a0 + (n-1) * d
        std::cout << ultimulTermen << '\n'; 
        return ((2/n)*(2*primulTermen + (n-1)*diferenta) );
    };
};