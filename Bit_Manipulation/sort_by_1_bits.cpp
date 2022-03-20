#include <bits/stdc++.h>
#include <unordered_map>
#include <algorithm>
using namespace std;
class Solution
{
public:
    int no_of_one(int num)
    { // Helper function for counting no. of 1 bits.
        int count = 0;
        while (num != 0)
        {
            num = num & (num - 1);
            count++;
        }
        return count;
    }
    bool static comp(pair<int, int> a, pair<int, int> b)
    { // Comparator Function to sort by bits.
        if (a.second == b.second)
        {
            return a.first < b.first;
        }
        return a.second < b.second;
    }
    vector<int> sortByBits(vector<int> &arr)
    {
        int n = arr.size();
        vector<pair<int, int>> p;
        for (int i = 0; i < n; i++)
        {
            int x = no_of_one(arr[i]);
            p.push_back(make_pair(arr[i], x));
        }
        sort(p.begin(), p.end(), comp);
        for (int i = 0; i < n; i++)
        { // Return the same vector.
            arr[i] = p[i].first;
        }
        return arr;
    }
};
// Analysis:-
// TC:- O(nlogn)
// SC:- O(n)