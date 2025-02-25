class Solution {
public:
    int jump(vector<int>& nums) {
        int MaxJump = 0;
        int Current = 0, MaxEnd = 0;
        for(int i=0;i<nums.size()-1;i++){
            MaxEnd = max(MaxEnd, nums[i] + i);
            if(Current == i){
                MaxJump +=1;
                Current = MaxEnd;
            }
        }
        return MaxJump;
    }
};