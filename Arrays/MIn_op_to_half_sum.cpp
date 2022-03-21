#include <bits/stdc++.h>
#include <unordered_map>
#include <algorithm>
using namespace std;
class Solution
{
public:
    // Use double as data type instead of float.
    int halveArray(vector<int> &nums)
    {
        priority_queue<double> pq; // Priority Queue to get the maximum value in O(1).
        int minop = 0;             // Variable to store the minimum operation.
        double temp = 0, sum = 0;
        for (auto i : nums)
        {
            sum += i;
            pq.push(i);
        }
        sum /= 2.0; // Our target is to reach this value in minimum operations.
        while (temp < sum)
        { // temp will store the extra sum to be removed so sum gets halfed.
            double mx = pq.top() / 2.0;
            pq.pop();
            temp += mx;
            pq.push(mx);
            minop++;
        }
        return minop;
    }
};
//Analysis:-
// TC:- O(nlogn)
// SC:- O(n)