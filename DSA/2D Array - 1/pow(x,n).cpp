#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    double myPow(double x, int n) {
        double ans;

        if(n<0)
        {
                n = abs(n);
                x = 1/x;
        }
        if(n==0)
            return 1;
        //n = n/2;
        ans = myPow(x,n/2);
        ans = ans*ans;
        if(n&1)
            return ans*x;
        else
            return ans;
    }
};