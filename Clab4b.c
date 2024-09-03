//Create a menu driven C program for to find if number is prime or not and to find if number is even or odd
#include<stdio.h>
#include<stdbool.h>
int main(){
    int n,num,count;
    bool isPrime=true;
    do{
    printf("1. Prime number or not\n");
    printf("2. Even or Odd\n");
    printf("3. Exit\n");
    printf("Enter the opition:");
    scanf("%d",&n);
    switch(n){
        case 1:
            // Input a number from the user
            printf("Enter a positive integer: ");
            scanf("%d", &num);

            // 0 and 1 are not prime numbers
            if (num <= 1) {
             isPrime = false;
            } else {
                // Check for factors from 2 to sqrt(number)
                for (int i = 2; i <= num / 2; i++) {
                    if (num % i == 0) {
                        isPrime = false;
                    break;
                    }
                 }
            }           

            // Display the result
            if (isPrime) {
                printf("%d is a prime number.\n", num);
            } else {
                printf("%d is not a prime number.\n", num);
            }
            
        break;

        case 2:
            // Input a number from the user
            printf("Enter an integer: ");
            scanf("%d", &num);

            // Check if the number is even or odd using the modulus operator
            if (num % 2 == 0) {
                printf("%d is an even number.\n", num);
            } else {
                printf("%d is an odd number.\n", num);
            }
        break;

        case 3:
            printf("Program exited successfully\n");
        break;

        default:
            printf("Enter the valid choice\n");
        break;
    }
    }while(n!=3);


    return 0;
}