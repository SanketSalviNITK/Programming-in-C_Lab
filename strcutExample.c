#include<stdio.h>

typedef struct
{
    char name[10];
    int math,phy,chem;
}student1;

typedef union
{
    int x;
    long long int y;
}student2;


int main()
{
    student1 s[2];
    
    for(int i=0;i<2;i++)
    {
        scanf("%s",s[i].name);
        scanf("%d",&s[i].math);
        scanf("%d",&s[i].phy);
        scanf("%d",&s[i].chem);        
    }

    for(int i=0;i<2;i++)
    {
        printf("%s\t %d\t %d\t %d",s[i].name,s[i].math,s[i].phy,s[i].chem);
                
    }
    
}
