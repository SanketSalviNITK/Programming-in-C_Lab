#include<stdio.h>
int power(int, int);
int main(){
    int base,exp;
    base=5;
    exp=0;
    printf("%d",power(base,exp));
    return 0;
}
int power(int base, int exp){
    if(exp==0)
    return 1;
    else
    return base*power(base,exp-1);
}