#include<stdio.h>
int isPalindrome(char *,int);
int isPalindromeR(char *,int);
int stringLength(char *);
int main(){
    char str[]="babbab";
    int l=stringLength(str);
    isPalindromeR(str,l)==1?printf("True\n"):printf("False\n");
    return 0;
}
int stringLength(char *a){
    int count=0;
    while(*a!='\0'){
        a++;count++;
    }    
    return count;
}
int isPalindrome(char *a,int l){
    for(int i=0;i<l/2;i++)
    {
        printf("%c\t%c\n",a[i],a[l-i-1]);
        if(a[i]!=a[l-i-1])
            return 0;
    }
    return 1;
}

int isPalindromeR(char *a,int l){
    int count=0;
    if(l==0)
        return 1;
    else if (a[count]==a[l-count-1])
        {
        printf("%c\t%c\n",a[count],a[l-count-1]);    
        return isPalindromeR(a+1,l-1);
        }
    else
        return 0;
}
