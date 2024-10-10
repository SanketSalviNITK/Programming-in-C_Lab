#include<stdio.h>

void showR(int*);
void showV(int);
void swapByReference(int*,int*);

int main()
{
    int a=10;
    int b=20;
    int *p=&a;
    //showV(a);
    //printf("%d\n",a);
    //showR(p);
    //printf("%d\n",a);
    printf("%d\t%d\n",a,b);
    swapByReference(&a,&b);
    printf("%d\t%d\n",a,b);
    
    return 0;
}
void swapByReference(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
void showV(int a){
    a=20;
    printf("%d\n",a);
}

void showR(int *a){
    *a=20;
    printf("%d\n",*a);
}