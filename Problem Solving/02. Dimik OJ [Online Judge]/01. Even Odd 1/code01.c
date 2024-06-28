#include<stdio.h>
int main(){
    int T,N;
    scanf("%d", &T);
    if(1<=T<=100){
        while(T!=0){
            scanf("%d", &N);
            if(N%2==0){
                printf("even\n");
            }else{
                printf("odd\n");
            }
            T--;
        }
    }
}