// Write a C program to find the average of marks of n students using array. 


#include<stdio.h>
int main(){
    int i, a_len, avg, sum = 0;
    printf("Enter the number of students: ");
    scanf("%d", &a_len);

    int a[a_len]; // Variable length Array where the length is defined by user

    for(i=0; i <a_len; i++){
        printf("Enter marks of student %d: ", i+1);
        scanf("%d", &a[i]);
        sum = sum + a[i];
    }

    avg = sum/a_len;
    printf("Average Number: %d", avg);
    return 0;

}



