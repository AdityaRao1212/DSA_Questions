#include <bits/stdc++.h>
#include <unordered_map>
#include <algorithm>
using namespace std;
class Solution
{
public:
    vector<int> intersect(vector<int> &nums1, vector<int> &nums2)
    {
        // First sort both the arrays.
        // Keep two pointers and solve the question.
        vector<int> res;
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        int n = nums1.size(), m = nums2.size(), i = 0, j = 0;
        while (i < n && j < m)
        {
            if (nums1[i] == nums2[j])
            { // If the numbers are same add to the vector and increment the pointers by one.
                res.push_back(nums1[i]);
                i++, j++;
            }
            else if (nums1[i] > nums2[j])
            { // If first one is greater increment the other pointer.
                j++;
            }
            else
            {
                i++;
            }
        }
        return res; // resultant vector.
    }
};
//Analysis:- 
//TC:- O(n)
//SC:- O(n) 
