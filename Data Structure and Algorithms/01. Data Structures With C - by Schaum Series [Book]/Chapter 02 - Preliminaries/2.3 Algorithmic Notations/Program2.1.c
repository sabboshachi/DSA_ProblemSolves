#include<stdio.h>
int main(){

    int DATA[10] = {212, 65, 1, 99, 32, 17, 74, 49, 33 , 2};

    int max, i, loc;

    max = DATA[0];
    loc = 0;

    for(i=1;i<10;i++){
        if(max < DATA[i]){
            max = DATA[i];
            loc = i;
        }
    }
    printf("The Max number in DATA is %d which is in the %d index.", max, loc);

    return 0;
}