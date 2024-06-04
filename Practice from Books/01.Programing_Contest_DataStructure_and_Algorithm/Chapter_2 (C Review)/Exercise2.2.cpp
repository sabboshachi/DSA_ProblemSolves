// Given the lengths of three sides of a triangle, find its area.

#include<iostream>
#include<string>
#include<math.h>

using namespace std;

int main(){
    int a,b,c,s;
    double area; 
    cout << "Enter the values of 3 sides of the triangle: " << endl;

    cin >> a;
    cin >> b;
    cin >> c;

    if(a+b>c){
        if(a+c>b){
            if(b+c>a){
                s=a+b+c;
                cout << "The perimeter of the triangle: " << s << endl;

                area = sqrt(s*(s-a)*(s-b)*(s-c));

                cout << "The area of the triangle: " << area << endl;

            }
            else{
                cout<<"You have entered wrong value. Summation of 2 sides of a tringle is must be greater than the reamining side.";
            }
        }
        else{
            cout<<"You have entered wrong value. Summation of 2 sides of a tringle is must be greater than the reamining side.";
        }
    }
    else{
        cout<<"You have entered wrong value. Summation of 2 sides of a tringle is must be greater than the reamining side.";
    }

    return 0;
}