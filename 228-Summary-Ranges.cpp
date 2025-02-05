class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> answer;
        if (nums.size() == 0){
            return answer;
        }

        int beg = 0;
        string interval = \\;
        for (int i = 0; i < nums.size(); i++){
            if (i == nums.size() - 1 || nums[i] != nums[i + 1] - 1){
                if (beg == i){
                    answer.push_back(to_string(nums[beg]));
                } else { 
                    interval = to_string(nums[beg]) + \->\ + to_string(nums[i]);
                    answer.push_back(interval);
                }
                beg = i + 1;
            }
        }
        return answer;
    }
};