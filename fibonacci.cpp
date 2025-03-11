#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i, N;
    long long int A[100];
    cin >> N;
    A[1] = 0;
    A[2] = 1;
    for(i = 3; i <= N; i++)
    {
        A[i] = A[i - 1] + A[i - 2];
    }
    cout << A[N] << " ";
    return 0;
}

