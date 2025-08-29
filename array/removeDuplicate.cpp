
  int removeDuplicates(vector<int> &nums) {
    int count = 1;
    if (nums.size() == 1)
      return 1;
    for (int i = 0; i < nums.size() - 1; i++) {
      if (nums[i] == nums[i + 1]) {
        continue;
      }
      count++;
    }

    return count;
  }
