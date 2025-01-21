class Solution {
public:
    int jump(vector<int>& nums) {
        int current_last = 0;
        int farthest = 0;
        int counter = 0;
        if (nums.size() == 1){
            return 0;
        } else if (nums[0] == nums.size() - 1){
            return 1;
        }

        for (int i = 0; i < nums.size() - 1; i++){
            farthest = max(farthest, i + nums[i]);

            if (i == current_last) {
                counter++;
                current_last = farthest;
            }
            
            if (current_last >= nums.size() - 1){
                break;
            }
        }
        return counter;
    }
};