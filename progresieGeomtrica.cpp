#pragma once
#include "progresie.hpp"
#include "math.h"
class ProgresieGeometrica : public Progresia {
    double c_primulTermen;
    double c_relatii;
public:
    ProgresieGeometrica(double a0, double r) : c_primulTermen(a0),c_relatii(r) {}

    double sumaProgresiei(int n) override {
        double ultTermen = c_primulTermen * std::pow(c_relatii, n-1); // ultimul termen: a0 * r^n
        std::cout << ultTermen << "\n";
         return c_primulTermen * (std::pow(c_relatii,n) - 1) / (c_relatii-1); // formula sumei progresiei geometrice
    }
};