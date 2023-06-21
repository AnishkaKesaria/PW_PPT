//Link - https://leetcode.com/problems/matrix-diagonal-sum/description/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int sum = 0;
        int j = mat.size() - 1;
        int n = mat.size();
        for(int i=0; i<mat.size(); i++)
        {
            sum += mat[i][i];
            sum += mat[i][j];
            j--;
        }
        if(n&1)
            sum -= mat[n/2][n/2];

        return sum;
    }
};