#include<stdio.h>
int main(){
    int i,j,n=10;
    for(i=1;i<=n;i++){
        for(j=1;j<=(2*n-1);j++){
            if(j>=n-(i-1) && j<=n){
                printf("* ");
            }else{
                printf(" ");
            }
        }
        printf("\n");
    }

}