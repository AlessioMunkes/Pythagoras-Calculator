#include <iostream>
#include <cmath>

int main(){

    double a;
    double b;
    double c;

    std::cout << "Enter side A of the triangle: ";
    std::cin >> a;
    std::cout << "Enter Side B of the triangle: ";
    std::cin >> b;

    c = sqrt(pow(a,2) + pow(b,2));

    std::cout << "The hypotenous is: " << c;

    return 0;
}