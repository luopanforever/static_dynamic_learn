#ifndef DYNAMICMATH_H_
#define DYNAMICMATH_H_
#include <stdio.h>

class DynamicMath{
public:
    static double add(double a, double b);
    static double sub(double a, double b);
    static double mul(double a, double b);
    static double div(double a, double b);
    static double print(){
        printf("dynamic math\n");
    }
};

#endif