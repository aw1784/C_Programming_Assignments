#include <stdio.h>
#include <math.h>
#define pi 3.14
int main()
{
    float r;
    printf("Enter the Radius of the circle : ");
    scanf("%f",&r);
    float area= pi*pow(r,2);
    printf("The Area of the circle = %8.3f\n",area);
    float c= pi*2*r;
    printf("The Circumference of the circle = %8.3f",c);

}