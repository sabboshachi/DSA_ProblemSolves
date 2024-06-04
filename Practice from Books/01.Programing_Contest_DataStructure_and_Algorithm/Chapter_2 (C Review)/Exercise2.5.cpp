// Print the nearest integer to the square root of a number.

#include <iostream>
#include <cmath>
#include <string.h>

using namespace std;

int main(){
    double number, sqroot,x,y;
    int a,b;

    cout << "Enter a number: ";

    cin >> number;

    sqroot = sqrt(number);
    
    a = sqroot;
    b = a + 1;

    x = sqroot - a;
    y = b - sqroot;

    if(x<y){
        cout << "The nearest integer is: " << a << endl;
    }else{
        cout << "The nearest integer is: " << b << endl; 
    }

    // We can do this math just by applying the bellow command
    // Calculate the square root and round to the nearest integer
    // int nearestInteger = round(sqrt(number)) 0

    return 0;
}

