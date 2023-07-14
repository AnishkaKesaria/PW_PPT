#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> ans(2*n);
        int j = 0, m = 0;
        for(int i=n; i<(2*n); i++)
        {
            ans[m++] = nums[j++];
            ans[m++] = nums[i];
        }
        return ans;
    }
};