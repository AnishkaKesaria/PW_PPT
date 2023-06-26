#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findLHS(vector<int>& nums) {
        unordered_map<int,int> m;
        for(int i=0; i<nums.size(); i++)
        {
            m[nums[i]]++;
        }
        int maxcount=0, count =0;
        for(auto p: m)
        {
            if(m.find(p.first - 1)!= m.end())
            {
                count = p.second + m[p.first - 1];
                maxcount = max(count, maxcount);
            }
        }
        return maxcount;
    }
};