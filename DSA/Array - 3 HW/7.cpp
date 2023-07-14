#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> solution(vector<int> &nums, int lower, int upper)
{
    vector<vector<int>> ans;
    int u = nums[0];
    
    if(lower<u)
        ans.push_back({lower, u-1});

    for(int i=1; i<nums.size(); i++)
    {
        if(nums[i] - nums[i-1] != 1)
        {
            u = nums[i];
            ans.push_back({nums[i-1]+1, u-1});
        }
    }

    if(upper - nums[nums.size()-1]>1)
        ans.push_back({nums[nums.size()-1]+1, upper-1});

    return ans;
}

int main()
{
    int n;
    cin>>n;
    vector<int> nums(n,0);
    for(int i=0; i<n; i++)
        cin>>nums[i];
    int lower, upper;
    cin>>lower>>upper;
    vector<vector<int>> ans = solution(nums,lower, upper);
    for(int i=0; i<ans.size(); i++)
    {
        cout<<"["<<ans[i][0]<<","<<ans[i][1]<<"]"<<endl;
    }
    return 0;
}