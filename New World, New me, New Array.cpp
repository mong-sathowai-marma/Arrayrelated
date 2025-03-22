#include<bits/stdc++.h>
using namespace std;
int main() 
{
    int t;
    cin >> t; 
    for(int i = 0; i < t; ++i)
    {
        int n,k,p;
        cin>>n>>k>>p;
        int MiS= -n * p;
        int MaS= n * p;
        if (k < MiS || k > MaS) 
        {
            cout<<-1<<endl;
        } 
        else 
        {
            int temp=abs(k);
            int result=(temp + p - 1) / p;
            cout<<result<<endl;
        }
    }
    return 0;
}
