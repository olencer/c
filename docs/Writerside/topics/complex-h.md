# complex.h
(since C99)

If the macro constant __\_\_STDC_NO_COMPLEX\_\___ is defined by the
implementation, the complex types, the header <complex.h> and all of the 
names listed here are not provided.(since C11)


The C programming language, supports complex number math with the three 
built-in types __double \_Complex__, __float \_Complex__, and __long double 
\_Complex__. When the header <complex.h> is included, the three complex 
number types are also accessible as __double complex__, __float complex__, 
__long double complex__.(since C99)


In addition to the complex types, the three imaginary types may be 
supported: __double \_Imaginary__, __float \_Imaginary__, and __long double 
\_Imaginary__. When the header <complex.h> is included, the three imaginary 
types are also accessible as __double imaginary__, __float imaginary__, and 
__long double imaginary__.


Standard arithmetic operators __+__, __-__, __*__, __/__ can be used with 
real, complex, and imaginary types in any combination.


A compiler that defines __\_\_STDC_IEC_559_COMPLEX\_\___ is recommended, but 
not required to support imaginary numbers. POSIX recommends checking if the 
macro __\_Imaginary\_I__ is defined to identify imaginary number support. 
(since C99)(until C11)


Imaginary numbers are supported if __\_\_STDC_IEC_559_COMPLEX\_\___ or 
__\_\_STDC_IEC_60559_COMPLEX\_\___ is defined.(since C23)

## Detail

| Types         |               |       |
|:--------------|:--------------|:------|
| imaginary     | keyword macro | (C99) |
| complex       | keyword macro | (C99) |

| The imaginary constant |                |       |
|:-----------------------|:---------------|:------|
| _Imaginary_I           | macro constant | (C99) |
| _Complex_I             | macro constant | (C99) |
| I                      | macro constant | (C99) |

| Manipulation |                |       |
|:-------------|:---------------|:------|
| CMPLX        | function macro | (C11) |
| CMPLXF       |
| CMPLXL       |
| creal        | function       | (C99) |
| crealf       |
| creall       |
| cimag        | function       | (C99) |  
| cimagf       |            
| cimagl       |
| cabs         | function       | (C99) |  
| cabsf        |
| cabsl        |
| conj         | function       | (C99) |  
| conjf        |
| conjl        |
| cproj        | function       | (C99) |  
| cprojf       |
| cprojl       |

| Exponential functions |          |       |
|:----------------------|:---------|:------|
| cexp                  | function | (C99) |
| cexpf                 |
| clog                  | function | (C99) |  
| clogf                 |
| clogl                 |

| Exponential functions |          |       |
|:----------------------|:---------|:------|
| cexp                  | function | (C99) |
| cexpf                 |
| cexpl                 |
| clog                  | function | (C99) |  
| clogf                 |
| clogl                 |

| Power functions |          |       |
|:----------------|:---------|:------|
| cpow            | function | (C99) |
| cpowf           |
| cpowl           |
| csqrt           | function | (C99) |  
| csqrtf          |
| csqrtl          |

| Trigonometric functions |          |       |
|:------------------------|:---------|:------|
| csin                    | function | (C99) |
| csinf                   |
| csinl                   |
| ccos                    | function | (C99) |
| ccosf                   |
| ccosl                   |
| ctan                    | function | (C99) |  
| ctanf                   |
| ctanl                   |
| casin                   | function | (C99) |
| casinf                  |
| casinl                  |
| cacos                   | function | (C99) |
| cacosf                  |
| cacosl                  |
| catan                   | function | (C99) |  
| catanf                  |
| catanl                  |

| Hyperbolic functions |          |       |
|:---------------------|:---------|:------|
| csinh                | function | (C99) |
| csinhf               |
| csinhl               |
| ccosh                | function | (C99) |
| ccoshf               |
| ccoshl               |
| ctanh                | function | (C99) |  
| ctanhf               |
| ctanhl               |
| casinh               | function | (C99) |
| casinhf              |
| casinhl              |
| cacosh               | function | (C99) |
| cacoshf              |
| cacoshl              |
| catanh               | function | (C99) |  
| catanhf              |
| catanhl              |

## Usage

### CMPLX

Constructs a complex number from real and imaginary parts.

```C
double complex      CMPLX(double real, double imag);
float complex       CMPLXF(float real, float imag);
long double complex CMPLXL(long double real, long double imag);
```

real
: the real part of the complex number to return.

imag
: the imaginary part of the complex number to return.

#### code {id="cmplx-code"}

```C
double complex a = CMPLX(1.1, -4.4);
float complex b = CMPLXF(-2.2, 5.5);
long double complex c = CMPLXL(3.3, -6.6);

printf("a = %5.2lf %+5.2lf * i\n", creal(a), cimag(a));
printf("b = %5.2f %+5.2f * i\n", crealf(b), cimagf(b));
printf("c = %5.2Lf %+5.2Lf * i\n", creall(c), cimagl(c));
```

#### output {id="cmplx-output"}

```Shell
cmake -B ./build
cmake --build ./build && ./build/CMPLX
# a =  1.10 -4.40 * i
# b = -2.20 +5.50 * i
# c =  3.30 -6.60 * i
```

<seealso>
    <!--Provide links to related how-to guides, overviews, and tutorials.-->
</seealso>