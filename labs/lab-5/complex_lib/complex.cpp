#include "complex.h"
#include <stdexcept>

Complex add(Complex a, Complex b)
{
    return {a.real + b.real, a.imag + b.imag};
}

Complex subtract(Complex a, Complex b)
{
    return {a.real - b.real, a.imag - b.imag};
}

Complex multiply(Complex a, Complex b)
{
    return {a.real * b.real - a.imag * b.imag,
            a.real * b.imag + a.imag * b.real};
}

Complex divide(Complex a, Complex b)
{
    double denominator = b.real * b.real + b.imag * b.imag;

    if (denominator == 0)
        throw std::invalid_argument("Division by zero");

    return {(a.real * b.real + a.imag * b.imag) / denominator,
            (a.imag * b.real - a.real * b.imag) / denominator};
}
