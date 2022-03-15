#include <bits/stdc++.h>
#include <unordered_map>
#include <algorithm>
using namespace std;
class Solution
{
public:
    int search(vector<int> &nums, int target)
    {
        int low = 0, high = nums.size() - 1, mid; //Initialization
        while (low <= high)
        {
            int mid = low + (high - low) / 2; //To handle overflow.
            if (nums[mid] == target) 
            {
                return mid;
            }
            else if (nums[low] <= nums[mid])
            {
                if (target >= nums[low] && target <= nums[mid])
                {
                    high = mid - 1;
                }
                else
                {
                    low = mid + 1;
                }
            }
            else
            {
                if (target >= nums[mid] && target <= nums[high])
                {
                    low = mid + 1;
                }
                else
                {
                    high = mid - 1;
                }
            }
        }
        return -1; //If target not in the array.
    }
};