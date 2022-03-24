#include <bits/stdc++.h>
#include <unordered_map>
#include <algorithm>
using namespace std;
class Solution
{
public:
    int numRescueBoats(vector<int> &people, int limit)
    {   //Allowed to take two people at the same time.
        // Make a pair of smallest and largest number within the limit to save precipus space.
        int n = people.size();
        int low = 0, high = n - 1; // Two pointers to make pair of largest and the smallest.
        int count = 0;
        sort(people.begin(), people.end()); // Sorting the vector.
        while (low <= high)
        {
            if (people[low] + people[high] <= limit)
            { // Give the pair a boat.
                low++;
                high--;
            }
            else
            {
                high--; // Either give the largest one a boat of its own.
            }
            count++; // Store the resutt.
        }
        return count;
    }
};
// Analysis:-
// TC:- O(nlogn)
// SC:- O(1)