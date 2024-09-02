#include<stdio.h>
#include<math.h>

int main()
{
    int a, b, c, discriminant, root1, root2, realPart, imagPart;
    printf("Enter the values for a, b, and c for quadratic equation 'ax^2+bx+c':");
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    printf("The given quadratic equation is %dx^2+%dx+%d",a,b,c);

    discriminant=pow(b,2)-4*a*c;

    if(discriminant>0){
        
     printf("Roots are real and different.\n");
        printf("Root 1 = %.2lf\n", root1);
        printf("Root 2 = %.2lf\n", root2);
    } else if (discriminant == 0) {
        // Two real and same roots
        root1 = root2 = -b / (2 * a);
        printf("Roots are real and the same.\n");
        printf("Root 1 = Root 2 = %.2lf\n", root1);
    } else {
        // Roots are complex and different
        realPart = -b / (2 * a);
        imagPart = sqrt(-discriminant) / (2 * a);
        printf("Roots are complex and different.\n");
        printf("Root 1 = %.2lf + %.2lfi\n", realPart, imagPart);
        printf("Root 2 = %.2lf - %.2lfi\n", realPart, imagPart);
    }

    return 0;
}