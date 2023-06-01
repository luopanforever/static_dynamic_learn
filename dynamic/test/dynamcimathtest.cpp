#include "DynamicMath.h"
#include<iostream>

int main(){
    std::cout << DynamicMath::add(1,2) << std::endl;
    std::cout << DynamicMath::sub(1,2) << std::endl;
    std::cout << DynamicMath::mul(1,2) << std::endl;
    std::cout << DynamicMath::div(1,2) << std::endl;
    DynamicMath::print();
}