class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int elements = 0;
        int repeated = 1;
        nums[elements] = nums[0];
        elements++;
        for (int i = 1; i < nums.size(); i++){
            if (nums[i] == nums[i - 1] && repeated < 2){
                repeated++;
                nums[elements] = nums[i];
                elements++;
            } else if (nums[i] != nums[i - 1]){
                repeated = 1;
                nums[elements] = nums[i];
                elements++;
            }
        }
        return elements;
    }
};