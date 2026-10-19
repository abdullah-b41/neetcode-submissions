class Solution {
   public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row = matrix.size();
        int col = matrix[0].size();

        int l = 0, r = row - 1;
        int x = -1;

        while (l <= r) {
            int mid = l + (r - l) / 2;

            if (matrix[mid][0] <= target && matrix[mid][col - 1] >= target) {
                x = mid;
                break;
            }

            if (matrix[mid][0] > target) {
                r = mid - 1;
            } else if (matrix[mid][col - 1] < target) {
                l = mid + 1;
            }
        }

        if (x == -1) return false;

        l = 0, r = col - 1;
        while (l <= r) {
            int mid = l + (r - l) / 2;
            if (matrix[x][mid] == target) return true;

            if (matrix[x][mid] > target)
                r = mid - 1;
            else
                l = mid + 1;
        }
        return false;
    }
};
