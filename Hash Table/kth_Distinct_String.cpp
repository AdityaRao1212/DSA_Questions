#include <bits/stdc++.h>
#include <unordered_map>
#include <algorithm>
using namespace std;
class Solution
{
public:
    string kthDistinct(vector<string> &arr, int k)
    {
        // First we have the count of the number of occurence of the string.
        unordered_map<string, int> mp; //Unordered map.
        for (auto i : arr)
        {
            mp[i]++; //Keeping the count of frequencies of the strings  
        }

        // Again traverse the array and find the ones with frequency of 1 and decrement the value of k by 1 and when it becomes 0 return the string.
        for (auto i : arr)
        {
            if (mp[i] == 1)
            {
                k--; //Decreasing the value of k.
            }
            if (k == 0)
            {
                return i; //IF k becomes equal to 0 return the string as it is our answer.
            }
        }
        return ""; // If the distinct strings are less than the value of k.
    }
};
// Analysis:
// TC: O(n)
// SC: O(n) 