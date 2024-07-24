// Write a program which reads your name from keyboard and output a list of ASCII codes which represent your name.

#include<stdio.h>
#include<string.h>

int main(){
    char line[1000];
    int i,len;
    printf("Enter Text. Press ENTER to Stop.\n");
    gets(line);

    len = strlen(line);

    printf("The ASCII representation of %s: ",line);

    for(i=0;i<len;i++){
        printf("%d",line[i]);
    }

    return 0;
}