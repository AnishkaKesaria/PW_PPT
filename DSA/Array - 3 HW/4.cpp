#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n = nums.size()-1;

        int s = 0, e = n;

        if(target<nums[0])
            return 0;

        if(target>nums[n])
            return n+1;

        while(s<e)
        {
            int mid = s+(e-s)/2;

            if(nums[mid]==target)
                return mid;

            else if(nums[mid]>target)
                e = mid;

            else
                s = mid+1;
        }

        return s;
    }
};