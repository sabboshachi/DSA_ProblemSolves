
#include<iostream>
#include<cmath>
#include<string.h>

using namespace std;

int main(){

    // counts how many 2 devides 100 ######################
    int x = 1024, count = 0;
    while(x % 2 == 0)
    {
        // we can write x /= 2 
        x = x / 2;
        count ++;
    }
    cout << count << endl;

    // find out the highsat number which is power of 2 and less than 1000  
    int a = 1;
    while (a * 2 < 1000)
    {
        a = a * 2; 
        // at the last point when a=512 it will back to the loop condition then check if 512*2 < 1000 
        // and so the finla value of a will be 512
    }
    cout << "The number is: " << a << endl;


    // same thing using for loop. Note there is a semicolon after the for loop. at the end of loop, you will find desired value in x. ######################
    int i;

    for(i=1;i*2<1000;i=i*2){
        // cout << i << endl;
    }
    cout << "Final value of 'a': " << i << endl;

   return 0;
}