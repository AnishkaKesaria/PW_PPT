#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        int sum = 0;
        sort(nums.begin(), nums.end());
        for(int i=nums.size()-1; i>0; i= i-2)
        {
            sum += nums[i-1];
        }
        return sum;
    }
};