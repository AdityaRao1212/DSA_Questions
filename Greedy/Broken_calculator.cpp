#include <bits/stdc++.h>
#include <unordered_map>
#include <algorithm>
using namespace std;
class Solution
{
public:
    int brokenCalc(int start, int target)
    {
        // Thinking in the reverse directgion is the trick to solve the question.
        int minop = 0;
        while (target > start)
        { // Till target is smaller or equal to the target run the loop.
            if (target % 2 == 0)
            { // If even divide by 2.
                target /= 2;
            }
            else
            {
                target++; // If odd then increment it by 1.
            }
            minop++; // INcrement the operation.
        }
        return minop + (start - target); // If any number is left the only operatrion left would be to add 1 to the start i.e. (start - target).
    }
};
// Analysis:-
// TC:- O(logn)
// SC:- O(1)