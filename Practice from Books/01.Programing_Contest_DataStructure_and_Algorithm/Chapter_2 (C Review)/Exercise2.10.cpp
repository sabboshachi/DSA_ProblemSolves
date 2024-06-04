// Take three numbers as input and print them in ascending order.

#include <iostream>
using namespace std;

int main() {
    int num1, num2, num3;
    
    cout << "Enter the first number: ";
    cin >> num1;
    
    cout << "Enter the second number: ";
    cin >> num2;
    
    cout << "Enter the third number: ";
    cin >> num3;
    
    // Sorting the numbers
    if (num1 > num2) {
        int temp = num1;
        num1 = num2;
        num2 = temp;
    }
    if (num2 > num3) {
        int temp = num2;
        num2 = num3;
        num3 = temp;
    }
    if (num1 > num2) {
        int temp = num1;
        num1 = num2;
        num2 = temp;
    }
    
    // Printing in ascending order
    cout << "The numbers in ascending order are: " << num1 << " " << num2 << " " << num3 << endl;
    
    return 0;
}
