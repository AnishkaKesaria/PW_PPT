#include <bits/stdc++.h>
using namespace std;

int balancedStringSplit(string s) {
    int lcount = 0;
    int rcount = 0;
    int count = 0;
    for(int i=0; i<s.length(); i++)
    {
        if(s[i]=='L')
            lcount++;
        else
            rcount++;
        if(lcount==rcount)
        {
            count += 1;
            lcount = 0;
            rcount = 0;
        }
    }
    return count;
}
