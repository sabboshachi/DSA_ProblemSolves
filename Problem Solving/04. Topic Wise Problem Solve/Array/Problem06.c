// Write a C program to put even and odd elements of an array in two separate arrays. 


#include<stdio.h>
int main(){
    
    int i,j=0,k=0, even_count = 0, odd_count = 0;
    int a[10] = {88,33,68,54,45,52,87,22,13,74};

    printf("Actual Array: \n");
    for (i=0; i<10; i++){
        printf("%d ", a[i]);
    }

    // Calculate the even and odd element numbers to define the length of odd and even array

    for (i=0; i<10; i++){
        if(a[i]%2 == 0){
            even_count++;
        }
        else{
            odd_count++; 
        }
    }
    
    int odd[odd_count], even[even_count];

    for (i=0; i<10; i++){
        if(a[i]%2 == 0){
            even[j] = a[i];
            j++;
        }
        else{
            odd[k] = a[i];
            k++;
        }
    }

    // Usning sizeof() operator we are defining the loop to run between the array length

    printf("\n");
    printf("Odd Array:  \n");
    for (i=0; i<(sizeof(odd)/sizeof(odd[0])); i++){
        printf("%d ", odd[i]);
    }

    printf("\n");
    printf("Even Array:  \n");
    for (i=0; i<(sizeof(even)/sizeof(even[0])); i++){
        printf("%d ", even[i]);
    }
    
    return 0;


}