class Solution {
public:
    int longestCommonSubsequence(string text1, string text2) {
        int LCS[1001][1001] = {};
        for (int i = 1; i <= text1.length(); i++)
        {
            for (int j = 1; j <= text2.length(); j++)
            {
                if (text1[i - 1] == text2[j - 1])
                    LCS[i][j] = LCS[i - 1][j - 1] + 1;

                else
                    LCS[i][j] = max(LCS[i - 1][j], LCS[i][j - 1]);
            }
        }
        return LCS[text1.length()][text2.length()];
    }
};