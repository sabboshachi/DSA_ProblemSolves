// given the value of n, you need to find the value of ∑ = i*(n-i+1)=1*n+2*(n-1)+ ... n * 1. (But if- else's practice problem!)


#include<iostream>
#include<cmath>
#include<string.h>

using namespace std;

int main(){
    int number, i, sum;

    cout << "Enter a number: ";
    cin >> number;

    for(i=1;i<=number;i++){
        sum = (i*(number-i+1));
    }

    cout << "The result is: "<< sum << endl;
    return 0;
}

// Don't understand how to solve it with if else conditional loop 