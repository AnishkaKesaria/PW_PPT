#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int> arr(n,0);
    for(int i=0; i<n; i++)
        cin>>arr[i];
    int target;
    cin>>target;

    vector<pair<int, int>> p;
    for(int i=0; i<n; i++)
    {
        pair<int,int> temp;
        temp.first = arr[i];
        temp.second = i;
        p.push_back(temp);
    }

    sort(p.begin(), p.end());

    int s = 0;
    int e = n-1;

    while(s<e)
    {
        int sum = p[s].first+p[e].first;
        if(sum==target)
        {
            cout<<p[s].second<<" "<<p[e].second;
            return 0;
        }
        else if(sum>target)
            e--;
        else if(sum<target)
            s++;
    }
    return 0;
}