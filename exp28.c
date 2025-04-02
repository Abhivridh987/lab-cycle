#include <stdio.h>
#include <stdlib.h>

typedef struct{
    float real;
    float imag;

} complex;

complex complexAdd(complex c1,complex c2)
{
    complex c3;
    c3.real=c1.real+c2.real;
    c3.imag=c1.imag+c2.imag;
    return c3;

}
complex complexSub(complex c1,complex c2)
{
    complex c3;
    c3.real=c1.real-c2.real;
    c3.imag=c1.imag-c2.imag;
    return c3;

}
complex complexMul(complex c1,complex c2)
{
    complex c3;
    c3.real=c1.real*c2.real - c1.imag*c2.imag;
    c3.imag=c1.real*c2.imag + c1.imag*c2.real;
    return c3;
}
complex readcomplex()
{
    complex c1;
    static int count=1;
    printf("\n\nEnter Complex number %d\n________________________________________________\n\n",count);
    printf("Enter the real part : ");
    scanf("%f",&(c1.real));
    printf("Enter the imaginary part : ");
    scanf("%f",&(c1.imag));
    count++;
    system("cls");
    return c1;
}

void printcomplex(complex c1)
{
    printf("%.1f + i %.1f\n",c1.real,c1.imag);
}

int main()
{
    complex c1,c2, sum,diff,prod;
    c1=readcomplex();
    c2=readcomplex();
    sum=complexAdd(c1,c2);
    diff=complexSub(c1,c2);
    prod=complexMul(c1,c2);

    printf("Complex number 1 : ");
    printcomplex(c1);
    printf("Complex number 2 : ");
    printcomplex(c2);
    printf("Sum : ");
    printcomplex(sum);
    printf("Difference : ");
    printcomplex(diff);
    printf("Product : ");
    printcomplex(prod);

}
