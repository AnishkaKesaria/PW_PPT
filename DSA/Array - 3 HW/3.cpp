#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int toswap, infpt;
        for(int i=nums.size()-1; i>0; i--)
        {
            if(nums[i]>nums[i-1])
            {
                toswap = i-1;
                infpt = i;
                break;
            }
        }

        if(infpt==0)
        {
            sort(nums.begin()+infpt, nums.end());
            return;
        }

        int diff = INT_MAX;
        int indextoswap;
        for(int i = nums.size()-1; i>toswap; i--)
        {
            if(nums[i]>nums[toswap] && nums[i]-nums[toswap]<diff)
            {
                indextoswap = i;
                diff = nums[i]-nums[toswap];
            }
        }
        swap(nums[indextoswap], nums[toswap]);

        sort(nums.begin()+infpt, nums.end());
        return;
    }
};