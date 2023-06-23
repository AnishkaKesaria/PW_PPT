#include<bits/stdc++.h>
using namespace std;

void solution(vector<int> &arr)
{
    int n= arr.size();
    int j = 0;
    for(int i=0; i<n; i++)
    {
        if(arr[i]!=0)
        {
            swap(arr[i],arr[j]);
            j++;
        }
    }
    return;
}

int main()
{
    int n;
    cin>>n;
    vector<int> nums(n,0);
    for(int i=0; i<n; i++)
    {
        cin>>nums[i];
    }
    solution(nums);
    for(int i=0; i<n; i++)
    {
        cout<<nums[i]<<" ";
    }
    return 0;
}