// Write a C program to copy one string into another using library function.

#include<stdio.h>
#include<string.h>

int main(){
    char str1[1000], str2[1000];
    int i=0;
    printf("Enter a string: \n");
    gets(str1);

    strcpy (str2, str1); // strcpy(to, from);


    printf("First string: %s\n",str1);
    printf("Copied string: %s\n",str2);

    
    return 0;
}