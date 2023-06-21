#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void transpose(vector<vector<int>>& matrix)
    {
        for(int i=0; i<matrix.size(); i++)
        {
            for(int j=i+1; j<matrix.size(); j++)
                swap(matrix[i][j], matrix[j][i]);
        }
        return;
    }

    void swapCols(vector<vector<int>>& matrix)
    {
        int n = matrix.size();
        for(int i=0; i<matrix.size(); i++)
        {
            for(int j=0; j<matrix.size()/2; j++)
                swap(matrix[i][j], matrix[i][n-j-1]);
        }
        return;
    }

    void rotate(vector<vector<int>>& matrix) {
        transpose(matrix);
        swapCols(matrix);
    }
};