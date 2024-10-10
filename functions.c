#include<stdio.h>
#include<stdbool.h>

int add(int x, int y);//Function Declaration
int getMin(int a,int b);
bool isMin(int a);
int a,b;
int main(){
    printf("Enter a and b:");
    scanf("%d%d",&a,&b);
    printf("%d",add(a,b));//Function Call
    printf("%d",isMin(a));
    return 0;
}

int add(int x,int y){//Function Definition
    return x+y;
}

int getMin(int a,int b){
    int res=a>b?b:a;
    return res;
}

bool isMin(int a){
    return a==getMin(a,b)? true:false;
}