
// Write a C program to check whether a string is palindrome or not without using library function.

#include<stdio.h>
#include<string.h>

int main(){
    char str1[1000], str2[1000];
    int i,j;
    printf("Enter a string: \n");
    gets(str1);

    for(i=(strlen(str1)-1),j=0;i>=0;i--,j++){
        str2[j]=str1[i];
    }
    printf("First string: %s\n",str1);
    printf("Copied string: %s\n",str2);

    if(strcmp(str2,str1)==0){
        printf("The entered string is palindrom.");
    }else{
        printf("The entered string is not palindrom.");
    }
    
    return 0;
}