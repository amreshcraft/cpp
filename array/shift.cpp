#include <bits/stdc++.h>
using namespace std;
  vector<int> shiftRight(vector<int> &arr) {
    int temp = arr[arr.size() - 1];
    int start = 0;
    int last = arr.size() - 1;
    while (start < last) {
      arr[last] = arr[last - 1];
      --last;
    }

    arr[0] = temp;

    return arr;
  }
