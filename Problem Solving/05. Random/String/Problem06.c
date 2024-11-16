// Write a C program to reverse a string without using strrev( ) function.

#include<stdio.h>
#include<string.h>
int main(){
    char line[1000];
    int i;
    printf("Enter Text. Press ENTER to Stop.\n");
    gets(line);

    for(i=strlen(line); i>=0; i--){
        printf("%c",line[i]);
    }
    return 0;
}