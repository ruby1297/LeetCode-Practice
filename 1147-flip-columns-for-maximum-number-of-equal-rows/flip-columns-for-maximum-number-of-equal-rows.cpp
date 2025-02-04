class Solution {
public:
    int maxEqualRowsAfterFlips(vector<vector<int>>& matrix) {
		unordered_map<string, int> patternCnt;
		int m = matrix.size(), n = matrix[0].size(), res = 0;
		for (int i = 0; i < m; ++i) {
			string row;
			for (int j = 0; j < n; ++j) {
				if (matrix[i][0] == 1) row += to_string(matrix[i][j]);
				else row += to_string(!matrix[i][j]);
			}
			++patternCnt[row];
			res = max(res, patternCnt[row]);
		}
		return res;
    }
};
