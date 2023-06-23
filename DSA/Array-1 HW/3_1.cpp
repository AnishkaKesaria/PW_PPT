#include <bits/stdc++.h>
using namespace std;

int solution(vector<int> &arr, int target)
{
    int s = 0;
    int e = arr.size()-1;

    while(s<=e)
    {
        int mid = s+ (e-s)/2;
        if(arr[mid]==target)
            return mid;
        
        else if(arr[mid]>target)
            e--;
        else
            s++;
    }

    return -1;
}

int main()
{
    int n;
    cin>>n;
    vector<int> arr(n,0);
    for(int i=0; i<n; i++)
        cin>>arr[i];
    int target;
    cin>>target;

    cout<<solution(arr, target);
    return 0;
}