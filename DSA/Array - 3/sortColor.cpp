// The Dutch Flag Algorithm

// Question Link - https://leetcode.com/problems/sort-colors/submissions/

#include <bits/stdc++.h>
using namespace std;

void sortColors(vector<int> &nums)
{
    int p0 = 0, curr = 0;
    int p2 = nums.size() - 1;
    while(curr<=p2)
    {
        if(nums[curr]==0)
        {
            swap(nums[p0], nums[curr]);
            p0++;
            curr++;
        }
        else if(nums[curr]==2)
        {
            swap(nums[curr], nums[p2]);
            p2--;
        }
        else
            curr++;
    }
    return;
}