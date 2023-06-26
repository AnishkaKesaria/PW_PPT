#include <bits/stdc++.h>
using namespace std;

bool isMonotonic(vector<int>& nums) {
    int pcount = 0;
    int ncount = 0;
    for(int i=0; i<nums.size()-1; i++)
    {
        if(nums[i+1]-nums[i]>=0)
            pcount++;
        if(nums[i+1]-nums[i]<=0)
            ncount++;
    }
    if(pcount==nums.size()-1 || ncount==nums.size()-1)
        return true;
    return false;
}
