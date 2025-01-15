#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int min1 = INT_MAX, min2 = INT_MAX;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] <= min1) {
            // nums[i] is less than the largest number
                min1 = nums[i];
            } else if (nums[i] <= min2) { 
            //nums[i] is greater than min1 but less than min2
                min2 = nums[i];
            } else {
            // if both cases satisfy, return true
                return true; 
            }
        }

        return false;      
    }
};
