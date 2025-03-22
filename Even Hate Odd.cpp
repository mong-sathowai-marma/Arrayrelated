#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int t;
    cin >> t;
    //while (t--)
    for(int i = 0; i<t; ++i)
    {
        int n;
        cin >> n;
        int a[n];
        int p = 0, q = 0;
        for (int i = 0; i < n; ++i) 
        {
            cin >> a[i];
            if (a[i] % 2 == 0) 
            {
                p++;
            } else {
                q++;
            }
        }
        if (n % 2 != 0) 
        {
            cout << -1 << endl;
            continue;
        }
        int result = abs(p - q);
        cout << result / 2 << endl;
    }
    return 0;
}
