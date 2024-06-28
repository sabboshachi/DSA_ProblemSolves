#include<iostream>
#include<cmath>
#include<string.h>

using namespace std;

int main(){
    int m,n, i, sum=0;
    cout << "Enter the value of n: ";
    cin >> n;

    for(int i=1; i<=n; i++){
        sum = sum + (i*i);
    }
    cout << sum;
    return 0;
}