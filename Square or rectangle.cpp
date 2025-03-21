#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int w,h;
        cin>>w>>h;
        if (w==h)
        {
            cout<<"Square"<<endl;
        }
        else
        {
            cout<<"Rectangle"<<endl;
        }
    }
    return 0;
}
