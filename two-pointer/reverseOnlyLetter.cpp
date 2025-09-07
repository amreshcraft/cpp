#include<cctype>

  string reverseOnlyLetters(string &s) {
    int start = 0;
    int end = s.size() - 1;

    while (start < end) {
      while (start < end && !isalpha(s[start])) {
        ++start;
      }
      while (start < end && !isalpha(s[end])) {
        --end;
      }

      swap(s[start], s[end]);
      start++;
      end--;
    }
    return s;
  }
