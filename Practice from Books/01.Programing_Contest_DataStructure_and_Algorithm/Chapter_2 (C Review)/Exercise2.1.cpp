//print the distance between two two-dimensional (2D) points given their co-ordinate input

#include<iostream>
#include<string.h>
#include<math.h>

using namespace std;

int main(){
    int x1,y1,x2,y2;
    double d;

    cout << "Enter the coordinate of point 1: ";
    cin >> x1;
    cin >> y1;

    cout << "Enter the coordinate of point 2: ";
    cin >> x2;
    cin >> y2;

    d=sqrt(((x1-x2)*(x1-x2))+((y1-y2)*(y1-y2)));


    cout << "The distance between point1 and point2 is: "<< d <<" Unit." << endl;

    return 0;
}