#include <bits/stdc++.h>
#include <unordered_map>
#include <algorithm>
using namespace std;
class Solution
{
public:
    vector<int> partitionLabels(string s)
    {
        vector<int> res;          // To store the answer.
        vector<int> alpha(26, 0); // Array of 26 alphabets.
        int n = s.length();
        for (int i = 0; i < n; i++)
        {
            alpha[s[i] - 'a'] = i; // Get the last occurence of every alphabet.
        }
        int p1 = 0, p2 = 0; // Two pointers to get the length of the partition.
        for (int i = 0; i < n; i++)
        {
            p1 = max(p1, alpha[s[i] - 'a']);
            if (i == p1)
            {
                res.push_back(i - p2 + 1);
                p2 = i + 1; // Updating the pointers.
            }
        }
        return res;
    }
};
//Analysis:-
// TC:- O(n)
// SC:- O(n)