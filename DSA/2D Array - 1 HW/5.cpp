#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int arrangeCoins(int n) {
        long long int sum = 0;
        int count = 0;
        for(int i=1; sum<n; i++)
        {
            sum += i;
            if(sum<=n)
                count++;
        }
        return count;
    }
};