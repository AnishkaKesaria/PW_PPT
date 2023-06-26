#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size() - 1;
        int prod1 = nums[n]*nums[n-1]*nums[n-2];
        int prod2 = nums[0]*nums[1]*nums[n];
        if(prod1>prod2)
            return prod1;
        return prod2;
    }
};