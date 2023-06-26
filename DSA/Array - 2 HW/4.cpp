//Had RuntimeError in Leetcode - please help

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool canPlaceFlowers(vector<int>& arr, int n) {
        
        if(arr.size()==1)
        {
            if(arr[0]==0)
                return true;
            else
                return false;
        }

        if(arr.size()==2)
        {
            if(arr[0]==1 || arr[1]==1)
                return false;
            return true;
        }

        int count = 0;

        for(int i=0; i<arr.size(); i++)
        {
            if(i==0)
            {
                if(arr[i]==0 && arr[i+1]==0)
                {
                    arr[i] = 1;
                    count++;
                }
            }

            if(i==arr.size()-1)
            {
                if(arr[i-1]==0 && arr[i]==0)
                {
                    arr[i] = 1;
                    count++;
                }
            }

            if(arr[i-1]==0 && arr[i]==0 && arr[i+1]==0)
            {
                arr[i] = 1;
                count++;
            }
        }

        if(count>=n)
            return true;
        return false;
    }
};


int main()
{
    Solution s;
    int n;
    cin>>n;
    vector<int> arr(n,0);
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    int f;
    cin>>f;

    cout<<s.canPlaceFlowers(arr, f);
    return 0;
}