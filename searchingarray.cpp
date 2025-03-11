#include<iostream>
using namespace std;
int main()
{
    int n, i, found = 0;
    cin >> n;
    int arr[n];
    for (i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int x;
    cin >> x;
    for (i = 0; i < n; i++) {
        if (arr[i] == x) {
            cout << i;
            found = 1;
            break;
        }
    }
    if (!found) {
        cout << -1;
    }
    return 0;
}

