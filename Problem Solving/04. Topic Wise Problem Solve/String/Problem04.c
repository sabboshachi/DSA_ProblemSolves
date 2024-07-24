// Write a C program to count the frequency of a character in a line of text.

#include<stdio.h>
#include<string.h>

int main(){
    char line[1000],c;
    int i,len,count;
    printf("Enter Text. Press ENTER to Stop.\n");
    gets(line);
    printf("Enter the character: ");
    scanf("%c",&c);

    len = strlen(line);

    for(i=0;i<len;i++){
        if(c==line[i]){
            count++;
        }
    }
    printf("The frequency of %c is %d",c,count);

    return 0;
}