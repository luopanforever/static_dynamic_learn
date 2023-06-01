#include "DynamicMath.h"

double DynamicMath::add(double a, double b){
    return a + b;
}
double DynamicMath::sub(double a, double b){
    return a - b;
}
double DynamicMath::mul(double a, double b){
    return a * b;
}
double DynamicMath::div(double a, double b){
    if(b == 0) return -1;
    return a / b;
}