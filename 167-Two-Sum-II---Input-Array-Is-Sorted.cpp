class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        //vector<int> answer;
        int left = 0;
        int right = numbers.size() - 1;
        while (left < right){
            if (numbers[right] + numbers[left] == target){
                return {left + 1, right + 1}; 
            } else if (numbers[right] + numbers[left] < target){
                left++;
            } else if (numbers[right] + numbers[left] > target){
                right --;
            }
        }
        return {};
        //return answer;
    }
};