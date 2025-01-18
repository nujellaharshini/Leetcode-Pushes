class Solution {
public:
    void rotate(vector<int>& nums, int k) { // ex. [1,2,3,4,5,6,7]
        k = k % nums.size(); // Normalize k
        reverse(nums.begin(), nums.end()); // reverse the entire array ex. [7,6,5,4,3,2,1]
        reverse(nums.begin(), nums.begin() + k); // reverse the first K elements ex. [5,6,7,4,3,2,1]
        reverse(nums.begin() + k, nums.end()); //reverse the remaining elements ex.[5,6,7,1,2,3,4]
    }
};