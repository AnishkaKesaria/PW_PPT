#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> ans;

        if(nums.size()<4)
            return ans;

        // if(nums.size()==4)
        
        for(int i=0; i<nums.size()-3; i++)
        {
            for(int j=i+1; j<nums.size()-2; j++)
            {
                long long newtarget = (long long)target - (long long)nums[i] - (long long)nums[j];
                int s = j+1;
                int e = nums.size()-1;
                while(s<e)
                {
                    if(nums[s]+nums[e]<newtarget)
                        s++;
                    else if(nums[s]+nums[e]>newtarget)
                        e--;
                    else
                    {
                        ans.push_back({nums[i],nums[j],nums[s],nums[e]});
                        s++;
                        e--;
                        while(s<e && nums[s]==nums[s-1])
                            s++;
                        while(s<e && nums[e]==nums[e+1])
                            e--;
                    }
                }
                while(j+1<nums.size() && nums[j]==nums[j+1])
                    j++;
            }
            while(i+1<nums.size() && nums[i]==nums[i+1])
                i++;
        }        
        return ans;
    }
};