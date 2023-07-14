#include <bits/stdc++.h>
using namespace std;

void takeInput(vector<int> &arr)
{
    for(int i=0; i<arr.size(); i++)
        cin>>arr[i];
    return;
}

vector<int> common(vector<int> &arr1, vector<int> &arr2)
{
    int n1 = arr1.size(), n2= arr2.size();
    int i=0, j = 0;
    vector<int> ans;
    while(i<n1 || j<n2)
    {
        if(arr1[i]==arr2[j])
        {
            ans.push_back(arr1[i]);
            i++;
            j++;
        }
        else if(arr1[i]<arr2[j])
            i++;
        else
            j++;
    }
    return ans;
}

vector<int> merge(vector<int> &arr1, vector<int> &arr2, vector<int> &arr3)
{
    vector<int> temp = common(arr1, arr2);
    vector<int> ans = common(temp, arr3);
    return ans;
}

int main()
{
    int n1, n2, n3;
    cin>>n1>>n2>>n3;

    vector<int> arr1(n1);
    takeInput(arr1);
    vector<int> arr2(n2);
    takeInput(arr2);
    vector<int> arr3(n3);
    takeInput(arr3);

    vector<int> ans = merge(arr1, arr2, arr3);
    for(auto i: ans)
        cout<<i<<" ";

    return 0;
}