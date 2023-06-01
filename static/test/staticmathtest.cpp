#include "StaticMath.h"
#include<iostream>

int main(){
    std::cout << StaticMath::add(1,2) << std::endl;
    std::cout << StaticMath::sub(1,2) << std::endl;
    std::cout << StaticMath::mul(1,2) << std::endl;
    std::cout << StaticMath::div(1,2) << std::endl;
    StaticMath::print();
}