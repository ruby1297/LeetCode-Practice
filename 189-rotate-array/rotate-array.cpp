class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int numSize = nums.size();
        k = k % numSize;  

        reverse(nums.begin(), nums.end());        
        reverse(nums.begin(), nums.begin() + k);  
        reverse(nums.begin() + k, nums.end());   
    }
};

// class Solution {
// public:
//     void rotate(vector<int>& nums, int k) {
//         int numSize = nums.size();
//         k = k % numSize; 
//         vector<int> temps(numSize);  

//         for(int i = 0; i < numSize; i++) {
//             temps[(i + k) % numSize] = nums[i];  
//         }
//         nums = temps;
//     }
// };
