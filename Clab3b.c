//C program to create a game of guessing the age
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    int age, gAge, count=1, flag=1;
    
    srand(time(0));
    
    age=(rand()%100)+1;

    while(count<4 && flag)
    {
        printf("Trial remaining:%d\n",4-count);
        printf("Enter the guessed age of Mr. X:");
        scanf("%d",&gAge);
        if(gAge<age){
            printf("Your guessed age is lesser than age of of Mr. X, try again\n");
        }
        else if(gAge>age)
        {
            printf("Your guessed age is greater than age of of Mr. X, try again\n");
        }
        else{
            printf("Yay! Congratulations you guessed it right\n");
            flag=0;
        }
        count++;
    }
    if(flag){

        printf("Sorry, you lost. The correct age was %d\n",age);
    }
    return 0;
}