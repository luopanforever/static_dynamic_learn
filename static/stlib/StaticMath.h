#ifndef STATICMATH_H_
#define STATICMATH_H_
#include <stdio.h>
class StaticMath{
public:
    static double add(double a, double b);
    static double sub(double a, double b);
    static double mul(double a, double b);
    static double div(double a, double b);
    static double print(){
        printf("static math\n");
    }
};

#endif