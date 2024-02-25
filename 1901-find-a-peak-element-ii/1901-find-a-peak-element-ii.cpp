class Solution {
public:
    int maxElement(vector<vector<int>>& mat, int col) {
        int row = mat.size();

        int max = INT_MIN;
        int maxIndex = -1;

        for (int i = 0; i < row; i++) {
            if (mat[i][col] > max) {
                max = mat[i][col];
                maxIndex = i;
            }
        }

        return maxIndex;
    }
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int row = mat.size();
        int col = mat[0].size();

        int low = 0;
        int high = col - 1;

        int left, right;

        while (low <= high) {
            int mid = low + (high - low) / 2;
            int rowIndex = maxElement(mat, mid);
            int element = mat[rowIndex][mid];

            if (mid - 1 >= 0) {
                left = mat[rowIndex][mid - 1];
            } else {
                left = -1;
            }

            if (mid + 1 < col) {
                right = mat[rowIndex][mid + 1];
            } else {
                right = -1;
            }

            if (element > left && element > right) {
                return {rowIndex, mid};
            } else if (element < left) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return {-1, -1};
    }
};