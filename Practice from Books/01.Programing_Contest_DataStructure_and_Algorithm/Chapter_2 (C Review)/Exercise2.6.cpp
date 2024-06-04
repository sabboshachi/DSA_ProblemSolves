// Given the coordinates of the vertices of a triangle, print the area.

#include<iostream>
#include<cmath>
#include<string.h>

using namespace std;

int main(){
    int x1,y1,x2,y2,x3,y3;
    double a,b,c,s,area;

    cout << "Enter the coordinate of A: ";
    cin >> x1 >> y1;

    cout << "Enter the coordinate of B: ";
    cin >> x2 >> y2;

    cout << "Enter the coordinate of C: ";
    cin >> x3 >> y3;

    a=sqrt(((x1-x2)*(x1-x2))+((y1-y2)*(y1-y2)));
    b=sqrt(((x1-x3)*(x1-x3))+((y1-y3)*(y1-y3)));
    c=sqrt(((x3-x2)*(x3-x2))+((y3-y2)*(y3-y2)));

    if(a+b>c && b+c>a && c+a>b){
        s=a+b+c;
        cout << "The perimeter of the triangle: " << s << endl;

        area = sqrt(s*(s-a)*(s-b)*(s-c));
        cout << "The area of the triangle: " << area << endl;
    }else{
        cout<<"You have entered wrong value. Summation of 2 sides of a tringle is must be greater than the reamining side.";
    }
    return 0;
}