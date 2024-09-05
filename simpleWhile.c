#include<stdio.h>

int main(){
    int count=3;
    while(count!=0) //Enters the loop when condition is true
    {
        printf("%d",count);
        count -=1;
    }
    printf("\n");

    do{
        printf("%d",count);
        count++;
    }while(count!=3); //Exits the loop when condition is true.
    return 0;
}