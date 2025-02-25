#include<algorithm>
class Solution {
public:
    int hIndex(vector<int>& citations) {
        sort(citations.begin(), citations.end());
        int Csize= citations.size();
        for(int h=0;h<Csize;h++){
            if(citations[h] >= Csize - h)
                return  Csize - h;
        }
        return 0;
    }
};