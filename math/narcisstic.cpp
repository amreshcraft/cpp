#include <bits/stdc++.h>

using namespace std;


class Solution {
public:
  string isNarcissistic(int num) {
    int count = 0;
    int temp = num;
    int temp2 = num;
    while (temp > 0) {
      ++count;
      temp = temp / 10;
    }

    int opNum = 0;
    while (temp2 > 0) {
      int ld = temp2 % 10;
      opNum = opNum + pow(ld, count);
      temp2 = temp2 / 10;
    }
    if(opNum == num) return "Yes";
    return "No";
  }
};


int main(){
    int n;
    cin>>n;
    Solution sol;
    cout<< sol.isNarcissistic(n)<<endl;
}