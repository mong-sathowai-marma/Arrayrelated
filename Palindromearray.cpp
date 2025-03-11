#include<iostream>
using namespace std;
int main()
{
    int n, i, j, temp = 1;
    cin >> n;
    int A[n];
    for (i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    for (i = 0, j = n - 1; i < j; i++, j--)
    {
        if (A[i] != A[j])
        {
            temp = 0;
            break;
        }
    }
    if (temp == 1)
        cout << "YES\n";
    else
        cout << "NO\n";
    return 0;
}

