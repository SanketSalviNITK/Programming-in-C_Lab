//Binary Search
#include<stdio.h>
int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int mid, left, right, target;
    left=0;
    right=9;
    printf("\n Enter the Element to be searched:");
    scanf("%d",&target);
    while(left<=right){
        mid=(left+right)/2;
        if(arr[mid]==target){
            printf("\nElement found");
            return 0;
        }
        else if(target>arr[mid]){
            left=mid+1;
        }
        else{
            right=mid-1;
        }
    }
    printf("\n Element not found");
    return 0;
}