#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<int> findDisappearedNumbers(vector<int> &nums)
    {

        vector<int> res;
        sort(nums.begin(), nums.end());
        cout<<"after sorting: "<<endl;
        for(int i : nums){
            cout<<i<<", ";
        }
        int start = 1;
        for (int i : nums)
        {
            if (i != start)
            {
                res.push_back(i);
            }
            ++start;
        }

        return res;
    }
};

int main()
{
    int num[] = {4, 3, 2, 7, 8, 2, 3, 1};
        int n = sizeof(num) / sizeof(num[0]);  // size of array

    // Convert array to vector
    vector<int> vec(num, num + n);
    Solution sol;
    vector<int> res = sol.findDisappearedNumbers(vec);
    cout<<"\n real output\n";
    for (int i : res)
    {
        cout << i << " ";
    }

    return 0;
}