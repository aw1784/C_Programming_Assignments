#include <stdio.h>
int main()
{
    float c;
    printf("Enter the degree in cels: ");
    scanf("%f",&c);
    float f=c*(9.0/5)+32;
    printf("The Temperature In Fahrenheit= %5.2f",f);
}