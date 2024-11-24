class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size() == 0)
            return 0;

        sort(nums.begin(), nums.end());
        int lastNumber = nums[0];
        int maxCount = 1;
        int count = 1;

        for(int i = 1; i < nums.size(); i++) {
            if(nums[i] == lastNumber + 1) 
                count++;
            else if(nums[i] > lastNumber) 
                count = 1;

            lastNumber = nums[i];
            maxCount = max(maxCount, count);
        }
        return maxCount;
    }
};
