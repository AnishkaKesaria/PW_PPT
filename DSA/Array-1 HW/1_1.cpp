//Brute Force

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int> arr(n,0);
    for(int i=0; i<n; i++)
        cin>>arr[i];
    int target;
    cin>>target;

    for(int i=0; i<n-1; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(arr[i] + arr[j]==target)
            {
                cout<<i<<" "<<j;
                return 0;
            }
        }
    }
    return 0;
}