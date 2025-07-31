#include <bits/stdc++.h>
using namespace std;

int findUniqueElement(vector<int> &nums) {
    unordered_map<int, int> hash;
    for (int i = 0; i < nums.size(); i++) {
      hash[nums[i]] = hash[nums[i]] + 1;
    }

    for (auto it = hash.begin(); it != hash.end(); ++it) {

      if (it->second == 1) {
        return it->first;
      }
    }
    return -1;
  }