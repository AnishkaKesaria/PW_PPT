//https://www.codingninjas.com/codestudio/problems/triplets-with-given-sum_893028?leftPanelTab=1

#include <bits/stdc++.h> 
using namespace std;
vector<vector<int>> findTriplets(vector<int>arr, int n, int K) {
	// Write your code here.
	set<vector<int>> st;
	for(int i=0; i<n; i++)
	{
		for(int j=i+1; j<n;j++)
		{
			for(int k=j+1; k<n; k++)
			{
				if(arr[i]+arr[j]+arr[k]==K)
				{
					vector<int> temp = {arr[i], arr[j], arr[k]};
					sort(temp.begin(), temp.end());
					st.insert(temp);
				}
			}
		}
	}
	vector<vector<int>> ans (st.begin(), st.end());
	return ans;
}