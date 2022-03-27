#include <bits/stdc++.h>
#include <unordered_map>
#include <algorithm>
using namespace std;
class Solution
{
public:
    static bool comp(pair<int, int> a, pair<int, int> b)
    { // Comparator to sort acoording to count of 1.
        if (a.second == b.second)
        { // Very Imp line.
            return a.first < b.first;
        }
        return a.second < b.second;
    }
    vector<int> kWeakestRows(vector<vector<int>> &mat, int k)
    {
        int n = mat.size();
        int count = 0; // To count the number of soldiers in each row.
        int m = mat[0].size();
        vector<int> res;
        vector<pair<int, int>> vp; // To make pair of index and number of soldiers.
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                count += mat[i][j];
            }
            vp.push_back(make_pair(i, count));
            count = 0;
        }
        sort(vp.begin(), vp.end(), comp);
        for (int i = 0; i < k; i++)
        {
            res.push_back(vp[i].first);
        }
        return res;
    }
};
// Analysis:-
// TC:- O(nlogn)
// SC:- O(n)