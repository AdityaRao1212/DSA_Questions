#include <bits/stdc++.h>
#include <unordered_map>
#include <algorithm>
using namespace std;
class Solution
{
public:
    vector<int> sumEvenAfterQueries(vector<int> &nums, vector<vector<int>> &queries)
    {
        // Firstly take the sum of all even numbers.
        // After that check if the changed position is even remove it from that sum.
        // Change the index value and check whether it is even and add it to the sum.
        vector<int> res;
        int sum = 0, n = queries.size();
        for (auto i : nums)
        {
            if (i % 2 == 0)
                sum += i;
        }
        // return {sum};
        for (int i = 0; i < n; i++)
        {
            int val = queries[i][0], index = queries[i][1];
            if (nums[index] % 2 == 0)
            {
                sum -= nums[index];
            }
            nums[index] += val;
            if (nums[index] % 2 == 0)
            {
                sum += nums[index];
            }
            res.push_back(sum);
        }
        return res;
    }
};
// TC:- O(n)
// SC:- O(n)