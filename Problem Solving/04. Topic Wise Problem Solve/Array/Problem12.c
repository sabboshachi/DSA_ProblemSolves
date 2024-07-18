// The annual examination result of 5 students are tabulated as follow:
// Roll no.	 Sub1	Sub2	Sub3
// Write a C program to read the data and determine the followings: 
        // a) Total marks obtained by each student 
        // b) The highest mark in each subject and the roll no. of the student who obtained it. 
        // c) The student who obtained the highest total marks.


#include<stdio.h>
int main(){
    int resulttable[5][4], total_mark[5][2];
    int i,j,k,sum=0, max=0, roll;
    for(i=0;i<5;i++){
        printf("Enter the numbers for roll 0%d: \n", i+1);
        for(j=1;j<4;j++){
            printf("Sub%d:",j);
            scanf("%d", &resulttable[i][j]);
        }
    }
    for(i=0;i<1;i++){
        for(j=0;j<5;j++){
            resulttable[j][i] = j+1;
        }
    }

    printf("\nResult table as, \nRoll no. Sub1 Sub2 Sub3\n");

    for(i=0;i<5;i++){
        for(j=0;j<4;j++){
            printf("%d ", resulttable[i][j]);
        }
        printf("\n");
    }

    // a) Total marks obtained by each student 

    printf("\nTotal marks obtained by each student\n");

    for(i=0;i<5;i++){
        sum = 0;
        for(j=1;j<4;j++){
            sum = sum + resulttable[i][j];
        }
        printf("Total mark for roll no. %d is %d\n", i+1, sum);
        
    }

    // b) The highest mark in each subject and the roll no. of the student who obtained it.
    printf("\nThe highest mark in each subject and the roll no. of the student who obtained it\n");


    for(i=0;i<1;i++){
        for(j=1;j<4;j++){
            max = resulttable[i][j];
            roll = resulttable[j][i];
            for(k=1;k<5;k++){
                if(max < resulttable[k][j]){
                    max = resulttable[k][j];
                    roll = resulttable[k][i];
                } 
            }
            printf("Max for sub%d: %d obtained by Roll no.: %d\n",j,max, roll);
            max = 0;
        } 
        
    }

    // c) The student who obtained the highest total marks. 

    printf("\nThe student who obtained the highest total marks\n");


    return 0;
}