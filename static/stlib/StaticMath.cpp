#include "StaticMath.h"

double StaticMath::add(double a, double b){
    return a + b;
}
double StaticMath::sub(double a, double b){
    return a - b;
}
double StaticMath::mul(double a, double b){
    return a * b;
}
double StaticMath::div(double a, double b){
    if(b == 0) return -1;
    return a / b;
}