//Understanding Switch case
#include<stdio.h>

int main(){
    int n;
    printf("1. Choice 1 is selected\n");
    printf("2. Choice 2 is selected\n");
    printf("3. Choice 3 is selected\n");
    printf("4. Choice 4 is selected\n");
    printf("Enter the choice number:");
    scanf("%d",&n);
    switch (n)
    {
    case 1:
        printf("1. Choice 1 is selected\n");
        break;
    case 2:
        printf("2. Choice 2 is selected\n");
        break;
    case 3:
        printf("3. Choice 3 is selected\n");
        break;
    case 4:
        printf("4. Choice 4 is selected\n");
        break;
    default:
        printf("Invalid option entered");
        break;
    }
    return 0;
}