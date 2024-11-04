//Linear Search
#include<stdio.h>
int main(){
    int arr[]={5,1,3,2,4,9,8,7,6,10};
    int target;
    printf("\nEnter the element to be searched:");
    scanf("%d",&target);
    for(int i=0;i<10;i++){
        if(target==arr[i]){
            printf("\nFound at %d index",i);
            return 0;
            }
    }
    printf("\nElement not found\n");
    return 0;
}