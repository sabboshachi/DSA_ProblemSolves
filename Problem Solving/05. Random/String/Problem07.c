// Write a C program to compare two strings.
#include<stdio.h>
#include<string.h>

int main(){
    char str1[1000], str2[1000];
    printf("Enter a string: \n");
    gets(str1);

    printf("Enter another string: \n");
    gets(str2);

    if((strcmp(str1,str2)) == 0){
        printf("Entered strings are equal.");
    }else if((strcmp(str1,str2)) <= 0){
        printf("Entered strings are not equal.");
    }
    return 0;
}