#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> difference(vector<int> &n1, vector<int> &n2)
    {
        vector<int> ans;
        unordered_set<int> s1(n1.begin(), n1.end());
        unordered_set<int> s2(n2.begin(), n2.end());
        for(auto x : s1)
            if(s2.find(x)==s2.end())    ans.push_back(x);
        return ans;
    }

    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        return {difference(nums1, nums2), difference(nums2,nums1)};
    }
};