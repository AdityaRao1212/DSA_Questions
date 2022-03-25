#include <bits/stdc++.h>
#include <unordered_map>
#include <algorithm>
using namespace std;
class Solution
{
public:
    int twoCitySchedCost(vector<vector<int>> &nums)
    {
        // A totally mindblowing question.
        int n = nums.size();
        int sum = 0;      // Total sum if sent to city A.
        vector<int> diff; // To store the difference between the cost of two cities.
        // If the difference between the cities is positive means it is better if we send the person to city B instead of A.
        for (int i = 0; i < n; i++)
        {
            sum += nums[i][0];
            diff.push_back(nums[i][0] - nums[i][1]);
        }
        sort(diff.begin(), diff.end(), greater<int>());
        for (int i = 0; i < n / 2; i++)
        { // i<n/2 because we need to send n people to both the cities.
            sum -= diff[i];
        }
        return sum;
    }
};
// Analysis:-
// TC:- O(nlogn)
// SC:- O(n)