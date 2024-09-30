#include<stdio.h>
#include<stdlib.h>
int fiboI(int);
int fiboR(int);

int main(){
    int n,choice;
    while(1){
    printf("\n1. Fibonacci Iterative\n");
    printf("2. Fibonacci Recursive\n");
    printf("3. Exit\n");
    printf("Enter choice:");
    scanf("%d",&choice);
    switch (choice)
    {
    case 1:
        printf("This Iterative:\n");
        printf("Enter the value of 'n':");
        scanf("%d",&n);
        for(int i=0;i<=n;i++)
        {
            int ans=fiboI(i);
            printf("%d\t",ans);
        }  
        break;
    case 2:
        printf("This Recurssive:\n");
        printf("Enter the value of 'n':");
        scanf("%d",&n);
        for(int i=0;i<=n;i++)
        {
            int ans=fiboR(i);
            printf("%d\t",ans);
        }  
        break;
    case 3:exit(0);
    
    default:printf("Please enter the valid choice number\n");
        break;
    }
    }
    return 0;
}

int fiboI(int n){
    int first=0,second=1, third=0;
    if(n==0)
        return 0;
    else if(n==1)
        return 1;
    else
        for(int i=2;i<=n;i++)
        {
            third=first+second;
            first=second;
            second=third;
        }
    return third;
}

int fiboR(int n){
    if(n==0)
        return 0;
    else if(n==1)
        return 1;
    else
        return fiboR(n-2)+fiboR(n-1);
}