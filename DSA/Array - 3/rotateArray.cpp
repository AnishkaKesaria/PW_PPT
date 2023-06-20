// Two pointer approach

//Link - https://leetcode.com/problems/rotate-array/submissions/

#include <bits/stdc++.h>
using namespace std;

void reverse(vector<int> &nums, int low, int high)
{
    while(low < high)
    {
        swap(nums[low], nums[high]);
        low++;
        high--;
    }
    return;
}

void rotate(vector<int> &nums, int k)
{
    int n = nums.size();
    k = k % n;

    reverse(nums, 0, n-k-1);
    reverse(nums, n-k, n-1);
    reverse(nums, 0, n-1);
    return;
}