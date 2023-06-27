#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        int i=0;
        for(int j=0; j<n; j++)
        {
            if(nums[j]!=0)
            {
                swap(nums[i],nums[j]);
                i++;
            }
        }
    }
};

int main()
{
    int n;
    cin>>n;
    vector<int> arr(n,0);
    for(int i=0; i<n; i++)
        cin>>arr[i];
    Solution s;
    s.moveZeroes(arr);
    for(int i=0; i<n; i++)
        cout<<arr[i]<<" ";
    return 0;
}