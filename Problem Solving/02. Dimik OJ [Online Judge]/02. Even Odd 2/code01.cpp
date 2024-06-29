#include<bits/stdc++.h>
using namespace std;

bool isEven(string number) {
    int lastDigit = number[number.size() - 1] - '0';
    return (lastDigit % 2 == 0);
}

int main() {
    int numTestCases;
    cin >> numTestCases;
    cin.ignore(); // Ignore the newline character after numTestCases

    for (int i = 0; i < numTestCases; i++) {
        string number;
        getline(cin, number);
        if (isEven(number)) {
            cout << "even" << endl;
        } else {
            cout << "odd" << endl;
        }
    }

    return 0;
}