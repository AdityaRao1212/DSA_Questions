#include <bits/stdc++.h>
#include <unordered_map>
#include <algorithm>
using namespace std;

class Solution
{
public:
    vector<vector<int>> diagonalSort(vector<vector<int>> &mat)
    {
        // A very good question of map and min-heap.
        //  Every cell has a unique id i.e. (i-j) value which is same for every diagonal.
        unordered_map<int, priority_queue<int, vector<int>, greater<int>>> mp;
        int n = mat.size(), m = mat[0].size();
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                mp[i - j].push(mat[i][j]); // Every unique key should have corresponding elements in the matrix.
            }
        }
        // Now assign the values to their correct places.
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                mat[i][j] = mp[i - j].top();
                mp[i - j].pop();
            }
        }
        return mat;
    }
};
// TC:- O(n*m*logD)
// SC:- O(n)
// D:- Size of the diagoanl. 