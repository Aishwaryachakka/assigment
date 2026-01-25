#include <stdio.h>
struct Complex
{
    float real;
    float imag;
};
int main()
{
    struct Complex c1, c2, sum, mul;
    printf("Enter real part of first complex number:\n");
    scanf("%f", &c1.real);
    printf("Enter imaginary part of first complex number:\n");
    scanf("%f", &c1.imag);
    printf("Enter real part of second complex number:\n");
    scanf("%f", &c2.real);
    printf("Enter imaginary part of second complex number:\n");
    scanf("%f", &c2.imag);
    sum.real = c1.real + c2.real;
    sum.imag = c1.imag + c2.imag;
    mul.real = (c1.real * c2.real) - (c1.imag * c2.imag);
    mul.imag = (c1.real * c2.imag) + (c1.imag * c2.real);
    printf("\nSum = %.2f + %.2fi\n", sum.real, sum.imag);
    printf("Product = %.2f + %.2fi\n", mul.real, mul.imag);
    return 0;
}