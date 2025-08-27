#include <bits/stdc++.h>
#include <vector>

int findDuplicate(vector<int> &nums)
{
    int duplicate = -1;
    unordered_map<int, int> freq;
    for (int i : nums)
    {
        freq[i]++;
    }

    for (auto &m : freq)
    {
        if (m.second >= 2)
        {
            return m.first;
        }
    }
    return duplicate;
}