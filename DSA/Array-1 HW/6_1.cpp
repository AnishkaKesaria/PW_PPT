#include <bits/stdc++.h>
using namespace std;

bool solution(vector<int> &arr)
{
    unordered_set<int> s;
    for(int i=0; i<arr.size(); i++)
        s.insert(arr[i]);

    if(s.size()<arr.size())
        return true;
    return false;
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
    bool ans = solution(nums);
    cout<<(ans==1?"true":"false");
    return 0;
}