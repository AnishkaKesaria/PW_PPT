#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        
        int sum = nums[0] + nums[1] + nums[2];
        int diff = abs(target - sum);
        
        for(int i=0; i<nums.size()-2; i++)
        {
            int s = i+1;
            int e = nums.size()-1;
            while(s<e)
            {
                int temp = nums[i] + nums[s] + nums[e];

                if(temp==target)
                    return temp;

                diff = temp - target;
                if(diff<abs(target-sum))
                    sum = temp;
                if(temp<target)
                    s++;
                else
                    e--;                
            }
        }
        return sum;
    }
};