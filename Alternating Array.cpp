#include <iostream>
using namespace std;
int main()
{
    int n,temp=0,flag=0;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            if (a[i] < 0)
            {
                temp++;
            }
            else
            {
                flag++;
            }
        }
        else
        {
            if (a[i] > 0)
            {
                temp++;
            } else
            {
                flag++;
            }
        }
    }
    if (temp < flag)
    {
        cout << temp << endl;
    }
    else
    {
        cout << flag << endl;
    }
    return 0;
}
