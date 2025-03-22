#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int n;
    cin >> n;
    int a[n];
    int p=0,q=n-1;
    for (int i = 0; i < n; ++i) 
    {
        cin >> a[i];
    }
    while (p <= q) 
    {
        cout << a[p] << " ";
        p++;
        
        if (p <= q) {
            cout << a[q] << " ";
            q--;
        }
    }
    cout << endl;
    return 0;
}
