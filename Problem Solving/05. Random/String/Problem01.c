// Write a C program to enter a line of text from keyboard and display it.

#include<stdio.h>
int main(){
    char line[1000];
    printf("Enter Text. Press ENTER to Stop.\n");
    gets(line);

    printf("%s",line);

    return 0;
}