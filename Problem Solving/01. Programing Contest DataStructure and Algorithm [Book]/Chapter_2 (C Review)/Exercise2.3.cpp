// Given the lengths of three sides of a triangle, find its three angles.

#include<iostream>
#include<string.h>
#include<cmath>

using namespace std;

int main(){
    double a, b, c, A, B, C;

    cout << "Enter the values of 3 sides of the triangle: " << endl;
    cin >> a >> b >> c;

    if(a+b>c){
        if(a+c>b){
            if(b+c>a){

                // Applying the equation for calculating the angle from sides.

                A = acos(((b*b)+(c*c)-(a*a))/(2.0*b*c));
                B = acos(((a*a)+(c*c)-(b*b))/(2.0*a*c));
                C = acos(((a*a)+(b*b)-(c*c))/(2.0*b*a));

                // The angle values are in radian. We need to convert in Degrees.

                A = A * (180.0 / M_PI);
                B = B * (180.0 / M_PI);
                C = C * (180.0 / M_PI);

                cout << "The angles of the triangle are : " << A << ", " << B << " & " << C << endl; 

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




