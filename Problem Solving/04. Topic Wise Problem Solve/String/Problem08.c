// Write a C program to concatenate three strings.
#include<stdio.h>
#include<string.h>

int main(){
    char str1[1000], str2[1000], str3[1000];
    printf("Enter first string: \n");
    gets(str1);

    printf("Enter second string: \n");
    gets(str2);

    strcat(str1,str2);
    printf("Enter third string: \n");
    gets(str3);

    strcat(str1,str3);

    printf("Full String:  %s\n", str1);
    
    return 0;
}