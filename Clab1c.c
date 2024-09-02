#include<stdio.h>
#include<math.h>
#define PI 3.142

int main()
{
    float radius;
    printf("Enter the radius:");
    scanf("%f",&radius);
    printf("\nThe circumference of circle for given radius is:%f",2*PI*radius);
    printf("\nThe area of circle for given radius is:%f",PI*pow(radius,2));
    return 0;
}