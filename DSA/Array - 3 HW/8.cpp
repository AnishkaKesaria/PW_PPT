#include <bits/stdc++.h>
using namespace std;

bool ifPossible(vector<vector<int>> time)
{
    sort(time.begin(), time.end());
    for(int i=1; i<time.size(); i++)
    {
        if(time[i-1][1]>time[i][0])
            return false;
    }
    return true;
}

int main()
{
    int n;
    cin>>n;
    vector<vector<int>> time;
    for(int i=0; i<n; i++)
    {
        int start, end;
        cin>>start>>end;
        time.push_back({start,end});
    }
    if(ifPossible(time))
        cout<<"true";
    else
        cout<<"false";
    return 0;
}