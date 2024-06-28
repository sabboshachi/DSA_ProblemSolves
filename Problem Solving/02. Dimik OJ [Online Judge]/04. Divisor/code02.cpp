#include<bits/stdc++.h>  // includes necessary library
using namespace std;
#define ll long long int
int main()
{
    int test;
    cin>>test;
    for(int t=1;t<=test;t++)
    {
        int num;
        cin>>num;
        cout<<"Case "<<t<<": ";  // printing Case numbers
        for(int i=1;i<num;i++)
        {
            if(num%i==0)
            {
                cout<<i<<" ";
            }
        }
        cout<<num<<endl;   // the last divisor will be the number itself
    }
    return 0;
}