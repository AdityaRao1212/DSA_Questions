#include <bits/stdc++.h>
#include <unordered_map>
#include <algorithm>
using namespace std;
class Solution
{
public:
    int minSwaps(int target, vector<int> &t, vector<int> &b)
    {
        int count = 0;
        int n = t.size();
        for (int i = 0; i < n; i++)
        {
            if (t[i] == target)
            { // If already present do nothing.
                continue;
            }
            else if (b[i] == target)
            { // Now swap it.
                count++;
            }
            else
            {
                count = INT_MAX; // If the value is not present in both just break the loop.
                break;
            }
        }
        return count; // The count of minimum swaps.
    }
    // Since we have 4 possibilities to make the dominos equal.
    // We take minimim of all the 4 possibilities in our answer.
    int minDominoRotations(vector<int> &tops, vector<int> &bottom)
    {
        int swaps = min(minSwaps(tops[0], tops, bottom), minSwaps(tops[0], bottom, tops));
        swaps = min(swaps, min(minSwaps(bottom[0], tops, bottom), minSwaps(bottom[0], bottom, tops)));
        return (swaps == INT_MAX) ? -1 : swaps;
    }
};
// Analysis:-
// TC:- O(n)
// SC:- O(1)
