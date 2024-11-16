// Write a C program to find the sum of marks of n students using array.

#include<stdio.h>
int main(){
    int i, a_len, sum = 0;
    printf("Enter the number of students: ");
    scanf("%d", &a_len);

    int a[a_len]; // Variable length Array where the length is defined by user

    for(i=0; i <a_len; i++){
        printf("Enter marks of student %d: ", i+1);
        scanf("%d", &a[i]);
        sum = sum + a[i];
    }

    printf("Sum = %d", sum);
    return 0;

}



