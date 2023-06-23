#include <bits/stdc++.h>
using namespace std;


vector<int> solution(vector<int>& digits) {
    int n = digits.size();
    for(int i=n-1; i>=0; i--)
    {
        if(digits[i]<9)
        {
            ++digits[i];
            return digits;
        }
        else
        {
            digits[i] = 0;
        }
    }
    digits.push_back(0);      
    digits[0] = 1;
    return digits;
}


int main()
{
    int n;
    cin>>n;
    vector<int> arr(n,0);
    for(int i=0; i<n; i++)
        cin>>arr[i];

    vector<int> ans;
    ans = solution(arr);
    for(int i=0; i<ans.size(); i++)
        cout<<ans[i]<<" ";
    return 0;
}