#include <bits/stdc++.h>
using namespace std;

pair<int, int> sumPositiveNegative(const vector<int> &arr)
{
    int psum = 0;
    int nsum = 0;
    pair<int, int> p;
    for (int i : arr)
    {
        if (i >= 0)
        {
            psum += i;
        }
        else
        {
            nsum += i;
        }
    }

    p.first = psum;
    p.second = nsum;
    return p;
}
