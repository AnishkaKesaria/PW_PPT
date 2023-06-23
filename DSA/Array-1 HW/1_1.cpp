#include <bits/stdc++.h>
using namespace std;

vector<int> solution(vector<int> &nums, int target)
{
    vector<pair<int,int>> v;
    for(int i=0; i<nums.size(); i++) v.push_back({nums[i],i});
    sort(v.begin(), v.end());
    int s=0, e = nums.size() - 1;
    while(s<e)
    {
        int sum = v[s].first + v[e].first;
        if(sum==target) return {v[s].second, v[e].second};
        else if(sum<target) s++;
        else e--;
    }
    return {0};
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

    vector<int> ans = solution(arr,target);

    for(int i=0; i<ans.size(); i++)
        cout<<ans[i]<<" ";
    return 0;
}