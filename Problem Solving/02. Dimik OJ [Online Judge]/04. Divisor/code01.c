#include<stdio.h>
int main(){
    int T, N, i, j, c=1;
    scanf("%d",&T);
    for(i=T;i>0;i--){
        scanf("%d",&N);
        printf("Case %d: ", c);
        if(N!=0){
            for(j=1;j<=N;j++){
                if(N%j!=0){
                    continue;
                }
                else if(j==N){
                    printf("%d",j);
                }
                else{
                    printf("%d ",j);
                }
            }
        }
        printf("\n");
        c++;
    }
    return 0;
}