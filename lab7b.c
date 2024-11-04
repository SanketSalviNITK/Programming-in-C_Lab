//Selection Sort
#include<stdio.h>
int main(){
    int arr[]={5,1,3,2,4,9,8,7,6,10};
    for(int i=0;i<10;i++){
        int min=arr[i];
        int minIndex=i;
        for(int j=i;j<10;j++){
            if(arr[j]<min){
                min=arr[j];
                minIndex=j;
            }
        }
        int temp=arr[i];
        arr[i]=arr[minIndex];
        arr[minIndex]=temp;
        printf("\nAfter Iteration:%d\n",i+1);
        for(int k=0;k<10;k++){
            printf("%d\t",arr[k]);
        }
    }
    return 0;
}