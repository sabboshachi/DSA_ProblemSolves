#include<stdio.h>
#include<math.h>

int main(){
    double r, area, pi;

    printf("Enter the radius of the circle: ");
    scanf("%lf", &r);

    pi = acos(-1);

    // acos returns the radian value. That's why we are getting pi = 3.1416...

    area = pi * r * r;

    printf("The area of the circle is: %lf\n", area);
    
    return 0;
}