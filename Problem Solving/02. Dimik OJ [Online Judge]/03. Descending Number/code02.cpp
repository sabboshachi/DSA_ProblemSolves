#include <bits/stdc++.h>
using namespace std;
int main()
{
    int cnt = 0;
    for (int i = 1000; i >= 1; i--)
    {
        cout << i;
        if(i%5!=1) cout<<" "; 
        cnt++;
        if (cnt == 5)
        {
            cout << endl;
            cnt = 0;
        }
    }
}