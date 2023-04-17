#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int E) {
        // Size of the candies array.
        int n = candies.size();
        // A boolean vector to store our answer.
        vector<bool> ans(n);
        // STL function to get the max element in an array.
        int mx = *max_element(candies.begin(), candies.end());
        // Traversing the array.
        for(int i=0; i<n; i++) {
            if(candies[i] + E >= mx) { //Checking whether after adding the adding the extra candy would the resultant be greater than max candy or not.
                ans[i] = true;
            } else {
                ans[i] = false;
            }
        }
        return ans; //Returning the answer.
    }
};
// Analysis:
// TC: O(n) 
// SC: O(n)