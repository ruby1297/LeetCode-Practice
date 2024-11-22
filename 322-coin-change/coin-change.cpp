class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        vector<int> DP(amount + 1, -1);
        DP[0] = 0; 
        
        for (int coin : coins) {
            for (int i = coin; i <= amount; ++i) {
                if (DP[i - coin] != -1) {
                    //If DP[i] == -1, it means the value has not been computed yet, assign DP[i - coin] + 1.
                    if (DP[i] == -1) 
                        DP[i] = DP[i - coin] + 1;
                    else 
                        DP[i] = min(DP[i], DP[i - coin] + 1);
                }
            }
        }

        return DP[amount];
    }
};