#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include"minHead.h"

int findMax(int*);

int main()
{
    int i[10];
    srand(time(0));
    for(int j=0;j<10;j++)
    {
        i[j]=rand()%10;
    }
    for(int j=0;j<10;j++){
        printf("%d\n",i[j]);
    }
    printf("Max is:%d\n",findMax(&i[0]));
    printf("Min is:%d\n",findMin(&i[0]));
    return 0;
}

int findMax(int *p){
    int max=*p;
    for(int j=0;j<10;j++,p++)
        {
            if(max<*p)
                max=*p;
        }
    return max;
}