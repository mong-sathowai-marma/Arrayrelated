#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,sum=0;
    cin >> n;
    string x;
    cin >> x;
    for(int i=0;i<x.size();i++)
    {
        sum=sum+(x[i]-'0');
    }
    cout << sum;
    return 0;
}