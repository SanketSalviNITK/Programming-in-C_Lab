#include<stdio.h>

int main(){
    int i,n;
    for(i=0;i<5;i++)
        printf("%d\n",i);

    printf("Enter the level for pattern:");
    scanf("%d",&n);
    for(i=0;i<(2*n-1);i++){
        if(i<n){
        for(int j=0;j<i;j++){
            printf("*\t");
        }
        printf("\n");
        }
        else{
            for(int j=(2*n-i);j>0;j--){
            printf("*\t");
        }
        printf("\n");
      
        }
    }
    return 0;
}