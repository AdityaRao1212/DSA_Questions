#include <bits/stdc++.h>
#include <unordered_map>
#include <algorithm>
using namespace std;

class Solution
{
public:
    int maxOperations(vector<int> &nums, int k)
    {
        int pairs = 0;
        sort(nums.begin(), nums.end()); // Sort the array.
        int i = 0, j = nums.size() - 1; // Keep two pointers to check the sum.
        while (i < j)
        {
            if (nums[i] + nums[j] == k)
            {
                pairs++;
                i++;
                j--;
            }
            else if (nums[i] + nums[j] > k)
            {
                j--;
            }
            else
            {
                i++;
            }
        }
        return pairs;
    }
};
// Complexity Analysis:
// TC:- O(NlogN)
// SC:- O(1)