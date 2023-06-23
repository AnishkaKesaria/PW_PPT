#include <bits/stdc++.h>
using namespace std;

void solution(vector<int> &arr1, vector<int> &arr2, int m, int n)
{
    vector<int> temp;
    int i=0, j=0;

    while(i<m && j<n)
    {
        if(arr1[i]<arr2[j])
        {
            temp.push_back(arr1[i]);
            i++;
        }
        else
        {
            temp.push_back(arr2[j]);
            j++;
        }
    }

    while(i<m)
    {
        temp.push_back(arr1[i]);
        i++;
    }

    while(j<n)
    {
        temp.push_back(arr2[j]);
        j++;
    }

    for(int i=0; i<temp.size(); i++)
    {
        arr1[i] = temp[i];
    }
    //cout<<endl;
    return;
}


int main()
{
    int m,n;
    cin>>m>>n;
    vector<int> arr1(m+n,0);
    vector<int> arr2(n,0);
    for(int i=0; i<m; i++)
        cin>>arr1[i];
    for(int i=0; i<n; i++)
        cin>>arr2[i];

    solution(arr1, arr2, m, n);

    for(int i=0; i<arr1.size(); i++)
        cout<<arr1[i]<<" ";
}