#include <iostream>
#include <iomanip>
#include <cmath>
#include "complex.h"

void print(const char* operation, Complex z)
{
    std::cout << operation << ": " << z.real
              << (z.imag < 0 ? " - " : " + ")
              << std::abs(z.imag) << "i\n";
}

int main()
{
    Complex z1{3, 2};
    Complex z2{1, -4};

    std::cout << std::fixed << std::setprecision(4);
    print("z1", z1);
    print("z2", z2);
    print("Addition", add(z1, z2));
    print("Subtraction", subtract(z1, z2));
    print("Multiplication", multiply(z1, z2));
    print("Division", divide(z1, z2));
    return 0;
}
