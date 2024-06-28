// Given a coordinate, you have to tell which quadrant it is in.

#include<iostream>
#include<cmath>
#include<string.h>

using namespace std;

int main(){
    int x,y;

    cout << "Enter the coordinate of the point: " << endl;

    cin >> x;
    cin >> y;

    if(x>0 && y>0){
        cout << "The point is in First Quadrant.";
    }else if(x<0 && y>0){
        cout << "The point is in Second Quadrant.";
    }else if(x<0 && y<0){
        cout << "The point is in Third Quadrant.";
    }else if(x>0 && y<0){
        cout << "The point is in Fourth Quadrant.";
    }else {
        cout << "The point is on one of the axes or at the origin." << endl;
    }

    return 0;
}