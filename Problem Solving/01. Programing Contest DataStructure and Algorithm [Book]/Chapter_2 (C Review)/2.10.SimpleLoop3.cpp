#include<iostream>
#include<cmath>
#include<string.h>

using namespace std;

int main(){


    // print odd numbers from 1 to 10

    for (int i=1; i<=10; i+=2){
        cout << i << endl;
    }

    cout << "###############" << endl;

    // print only 1,2 and 3
    for (int i=1; i<=10; i++){
        if (i>3){
            break;
        }else{
            cout << i << endl;
        }
    }

    cout << "###############" << endl;

    // takes input untill the input is 0.
    // sometimes it is neded for OJs.
    // EOF = End of File
    // take input while it is not end of file.

    // int a=1;
    
    // while(a != EOF){
    //     cin >> a;
    //     if(a == 0){
    //         break;
    //     }else{
    //         cout <<"The number is: "<< a << endl;
    //     }
    // }


    cout << "###############" << endl;


    // or in short

    int k=1;

    while(k != EOF && k){
        cin >> k;
        cout <<"The number is: "<< k << endl;
    }


    

    










    return 0;
}