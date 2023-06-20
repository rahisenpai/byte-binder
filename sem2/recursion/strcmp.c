#include <stdio.h>

int cmp_string(char str1[], char str2[]){
    int i=0;
    while(str1[i]!='\0' && str2[i]!='\0'){
        if (str1[i]>str2[i] && str1[i]-str2[i]!=32)
            return 1;
        else if (str1[i]<str2[i] && str2[i]-str1[i]!=32)
            return -1;
        i++;
    }
    if (str1[i]=='\0' && str2[i]=='\0')
        return 0;
    if (str1[i]=='\0')
        return -1;
    if (str2[i]=='\0')
        return 1;
}

int main(){
    printf("%d\n",cmp_string("apple","banana"));
    return 0;
}