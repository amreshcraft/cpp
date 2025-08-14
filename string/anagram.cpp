#include <bits/stdc++.h>
class Solution {
public:
  bool isAnagram(const string &s, const string &t) {
    unordered_map<char, int> freqS, freqT;

    if (s.size() != t.size())
      return false;

    for (char c : s) {
      freqS[c]++;
    }

    for (char c : t) {
      freqT[c]++;
    }

    return freqT == freqS;
  }
};