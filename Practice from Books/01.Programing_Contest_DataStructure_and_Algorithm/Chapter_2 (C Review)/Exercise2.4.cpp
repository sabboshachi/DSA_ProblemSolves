// Given the radius of a circle, find the perimeter.

#include<iostream>
#include<cmath>
#include<string.h>

using namespace std;

int main(){

    int r;

    cout << "Enter the value of radius: ";
    cin >> r;

    cout << "The perimeter of the circle is : " << 2*r*M_PI<<endl;
    return 0;

}