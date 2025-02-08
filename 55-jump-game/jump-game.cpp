class Solution {
public:
    bool canJump(vector<int>& nums) {
        int MaxJump = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (i > MaxJump)
                return false;

            MaxJump = max(MaxJump, nums[i] + i);

            if (MaxJump >= nums.size() - 1) 
                return true;
        }
        return false;
    }
};
