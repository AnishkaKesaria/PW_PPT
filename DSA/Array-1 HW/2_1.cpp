#include <bits/stdc++.h>
using namespace std;

void solution(vector<int> &arr, int value)
{
    int n = arr.size();
    int count = 0;
    for(int i=0; i<arr.size(); i++)
    {
        if(arr[i]==value)
        {
            arr.erase(arr.begin()+i);
            i--;
            count++;
        }
    }
    int k = n-count;

    cout<<"k: "<<k<<endl;
    cout<<"Array after removal: ";
    for(int i=0; i<arr.size();i++)
        cout<<arr[i]<<" ";
    return;
}

int main()
{
    int n;
    cin>>n;
    vector<int> arr(n,0);
    for(int i=0; i<arr.size();i++)
        cin>>arr[i];
    int val;
    cin>>val;
    solution(arr, val);
    return 0;    
}