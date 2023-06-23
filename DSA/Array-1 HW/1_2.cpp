#include <bits/stdc++.h>
using namespace std;

pair<int,int> solution(vector<int> &arr, int target)
{
    map<int,int> m;
    for(int i=0; i<arr.size(); i++)
    {
        m[arr[i]] = i;
    }

    for(int i=0; i<arr.size(); i++)
    {
        int curr = arr[i];
        int x = target-curr;
        if(m.find(x)!=m.end())
            return make_pair(i,m[x]);
    }

    return make_pair(-1,-1);
}

int main()
{
    int n;
    cin>>n;
    vector<int> arr(n,0);
    for(int i=0; i<n; i++)
        cin>>arr[i];
    int target;
    cin>>target;
    pair<int,int> ans = solution(arr, target);
    cout<<ans.first<<" "<<ans.second;
    return 0;
    
}