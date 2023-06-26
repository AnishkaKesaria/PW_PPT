#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int size = flowerbed.size();
        int newsize = size+2;
        vector<int> bed(newsize, 0);
        for(int i=1; i<bed.size()-1; i++)
        {
            bed[i] = flowerbed[i-1];
        }

        int count = 0;
        for(int i=1; i<newsize-1; i++)
        {
            if(bed[i-1] + bed[i] + bed[i+1] == 0)
            {
                bed[i] = 1;
                count++;
            }
        }

        if(count>=n)
            return true;
        return false;
    }
};