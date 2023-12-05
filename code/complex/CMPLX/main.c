#include <stdio.h>
#include <complex.h>

int main()
{
    double complex a = CMPLX(1.1, -4.4);
    float complex b = CMPLXF(-2.2, 5.5);
    long double complex c = CMPLXL(3.3, -6.6);

    printf("a = %5.2lf %+5.2lf * i\n", creal(a), cimag(a));
    printf("b = %5.2f %+5.2f * i\n", crealf(b), cimagf(b));
    printf("c = %5.2Lf %+5.2Lf * i\n", creall(c), cimagl(c));
}