#include<stdio.h>
int get_slength(char*);
int get_charnum(char*);
int get_vownum(char*);

int main(){
    char str[100];
    printf("Enter a string:");
    gets(str);
    printf("Echo:%s",str);
    printf("\nThe string length is:%d",get_slength(str));
    printf("\nThe number of character in string is:%d",get_charnum(str));
    printf("\nThe number of vowels in string is:%d",get_vownum(str));
    return 0;
}

int get_slength(char* p){
    int len=0;
    while(*p!='\0')
    {
        p++;len++;
    }
    return len;
}

int get_charnum(char* p){
    int num=0;
    while(*p!='\0')
    {
        if(*p!=' ')
            num++;
        p++;
    }
    return num;
}

int get_vownum(char* p){
    int num=0;
    while(*p!='\0')
    {
        if(*p=='a'||*p=='e'||*p=='i'||*p=='o'||*p=='u')
            num++;
        if(*p=='A'||*p=='E'||*p=='I'||*p=='O'||*p=='U')
            num++;    
        p++;
    }
    return num;
}