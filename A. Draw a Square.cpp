#include <iostream>
#include<cmath>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        int l, r, d, u;
        cin>>l>>r>>d>>u;
        double d1 = sqrt(2) * l;
        double d2 = sqrt(2) * d;
        double d3 = sqrt(2) * r;
        double d4 = sqrt(2) * u;
        if (d1==d2 && d2==d3 && d3==d4 &&d4==d1 && l == d && d==r && r==u && u==l)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
    return 0;
}
