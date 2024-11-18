#include<stdio.h>
#include<stdbool.h>
bool string_comp(char*,char*);
bool get_longerString(char*,char*);
void string_concat(char*,char*);
int get_occurancesSubstring(char*,char*); 
int main(){
    char str1[100],str2[100];
    printf("Enter the first string:");
    gets(str1);
    printf("Enter the second string:");
    gets(str2);
    
    if(string_comp(str1,str2))
    printf("Both the strings are equal\n");
    else
    printf("The strings are not equal\n");

    if(get_longerString(str1,str2))
    printf("String 1 is longer\n");
    else
    printf("String 2 is longer\n");

    //string_concat(str1,str2);
    //printf("The concatinated string is:%s\n",str1);

    printf("The number of times the substring appeared is:%d\n",get_occurancesSubstring(str1,str2));
    return 0;
}

bool string_comp(char* s1,char* s2){
    while(*s1!='\0' && *s2!='\0'){
        if(*s1!=*s2)
        return false;
        s1++;
        s2++;
    }
    return true;
}

bool get_longerString(char* s1, char* s2){
    int len1=0, len2=0;
    while(*s1!='\0'){
        len1++;
        s1++;
    }
    while(*s2!='\0'){
        len2++;
        s2++;
    }
    if(len1>len2)
    return true;
    else
    return false;
}

void string_concat(char* s1, char* s2){
    while(*s1!='\0')
    {
        s1++;
    }
    while(*s2!='\0'){
        *s1=*s2;
        s1++;
        s2++;
    }
    *s1='\0';
}

int get_slen(char* p){
    int len=0;
    while(*p!='\0')
    {
        p++;
        len++;
    }
    return len;
}

int get_occurancesSubstring(char* s1,char* s2){
     int count = 0;
    int strLen = get_slen(s1);
    int subLen = get_slen(s2);

  
    if (subLen == 0 || subLen > strLen) {
        return 0;
    }

    for (int i = 0; i <= strLen - subLen; i++) {

        int match = 1;
        for (int j = 0; j < subLen; j++) {
            if (s1[i + j] != s2[j]) {
                match = 0;
                break;
            }
        }

        if (match) {
            count++;
        }
    }

    return count;
}
