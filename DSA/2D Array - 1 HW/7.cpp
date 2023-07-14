#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxCount(int m, int n, vector<vector<int>>& ops) {
        int leastrow = m;
        int leastcol = n;
        for(int i=0; i<ops.size(); i++)
        {
            if(leastrow>ops[i][0])
                leastrow = ops[i][0];
            if(leastcol>ops[i][1])
                leastcol = ops[i][1];
        }
        return (leastrow*leastcol);
    }
};