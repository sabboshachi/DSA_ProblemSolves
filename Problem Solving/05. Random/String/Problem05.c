// Write a C program to reverse a string using strrev( ) function.

#include<stdio.h>
#include<string.h>

int main(){
    char line[1000],c;
    int i,len,count;
    printf("Enter Text. Press ENTER to Stop.\n");
    gets(line);
    
    printf("Reverse of entered string is \n%s",strrev(line));

    return 0;
}