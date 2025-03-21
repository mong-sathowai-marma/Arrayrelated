#include <iostream>
using namespace std;
int main()
{
    int n,temp=0;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 0)
            {
            int left = 0, right = i - 1;
            while (left < right)
            {
                temp = a[left];
                a[left] = a[right];
                a[right] = temp;
                left++;
                right--;
            }
        }
    }
    for (int i = 0; i < n; i++)
        {
        cout << a[i] << " ";
    }
    cout << endl;
    return 0;
}

