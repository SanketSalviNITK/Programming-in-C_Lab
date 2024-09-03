//C program to understand rand() and srand() function for genrating a random number
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    int randomNum;
    srand(time(0)); 

    randomNum=(rand() % 100) + 1;
    printf("%d",randomNum);
    return 0;
}