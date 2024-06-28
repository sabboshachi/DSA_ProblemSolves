#include<iostream>
#include<string.h>

using namespace std;

int main(){
    double Number1, Number2, Number3, Number4;

    // C++ Style ###################################################################

    cout << "Enter First Number: ";
    cin >> Number1;

    cout << "Enter Second Number: ";
    cin >> Number2;

    cout << "The sum of your given number is : " << Number1 + Number2 << endl;
    cout << "The difference of your given number is : " << Number1 - Number2 << endl;
    cout << "The multiplication of your given number is : " << Number1 * Number2 << endl;
    cout << "The division of your given number is : " << Number1 / Number2 << endl;


    // C Style ###################################################################

    printf("Enter First Number: ");
    scanf("%d\n", &Number3);

    printf("Enter Second Number: ");
    scanf("%d\n", &Number4);

    printf("The sum of your given number is : %d\n", Number3*Number4);



    return 0;
}

