
  bool searchMatrix(vector<vector<int>> &matrix, int target) {
    for (int row = 0; row < matrix.size(); row++) {
      int start = 0;
      int end = matrix[row].size() - 1;
      while (start <= end) {
        int mid = (start + end) / 2;
        if (matrix[row][mid] == target)
          return true;
        if (matrix[row][mid] > target) {
          end = mid - 1;
        } else {
          start = mid + 1;
        }
      }
    }

    return false;
  }
