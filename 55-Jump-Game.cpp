class Solution {
public:
    // I used greedy algorithm starting from the end and changing the goal state
    bool canJump(vector<int>& nums) {
        int goal = nums.size() - 1;
        for (int i = nums.size() - 1; i >= 0; i--){
                if (i + nums[i] >= goal){
                    goal = i;
                }
        }
        if (goal == 0){
            return true;
        } else {
            return false;
        }
    }
};