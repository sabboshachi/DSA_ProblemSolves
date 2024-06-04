// Palindrome
// 1, 2, 3, ... 9, 11, 22, 33, 99, 101, 111, 121,.......
// Print the Nth Palindrome Number. (n < 100)

#include<iostream>
#include<cmath>
#include<string.h>

using namespace std;

int main(){
    int n, count=0, num=0;
    cout << "Enter a number less than 100: ";
    cin >> n;

    while (count <n)
    {
        ++num;
        int reversed = 0;
        int original =  num;

        // Reverse Number 
        while (original !=0)
        {
            reversed = reversed*10 + original%10;
            original /= 10;
        }

        // Check if the number is palindrome
        if(num == reversed){
            ++count;
        }
    }
    cout << "The "<< n <<"th palindrome number is: "<< num <<endl;
    return 0;
}