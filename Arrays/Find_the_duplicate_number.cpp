#include <bits/stdc++.h>
#include <unordered_map>
#include <algorithm>
using namespace std;
class Solution
{
public:
    int findDuplicate(vector<int> &nums)
    {
        // Using only Constant space.
        int n = nums.size();
        // At every index store the occurence of the number and multiply by -1. Because the duplicate will repeat twice therefore the value will become positive hence that will be our solution.
        for (int i = 0; i < n; i++)
        {
            int index = abs(nums[i]) - 1;
            nums[index] *= -1;
            if (nums[index] > 0)
            { // The duplicate number will have the value as positive.
                return abs(nums[i]);
            }
        }
        return -1; // If no such duplicate number is found return -1.
    }
};
// Analysis:-
// TC:- O(n)
// SC:- O(1)