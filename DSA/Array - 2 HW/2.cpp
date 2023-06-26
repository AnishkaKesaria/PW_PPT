#include <bits/stdc++.h>
using namespace std;


int distributeCandies(vector<int>& candyType) {
    unordered_set<int> s;
    for(int i=0; i<candyType.size(); i++)
        s.insert(candyType[i]);
    if(candyType.size()< 2*s.size())
        return (candyType.size()/2);
    else
        return s.size();
}
