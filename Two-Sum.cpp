class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // declaring a hashmap: std::unordered_map<KeyType, ValueType> mapName;

        // inserting elemetns: ages["John"] = 30;


        // iterate over the key-value pairs using a range-based for loop:
        // for (const auto& pair : ages) {
        //    std::cout << pair.first << ": " << pair.second << std::endl;
        // }

        // to check if key exists: Returns 1 if the key exists, 0 otherwise
        //    if (ages.count("John")) { } 

        std::unordered_map<int, int> sumMap;
        for (int i = 0; i < nums.size(); i++){
            sumMap[nums[i]] = i;
        }

        int find_num;
        for (int i = 0; i < nums.size(); i++){
            find_num = target - nums[i];
            if (sumMap.count(find_num) && sumMap[find_num] != i) {
                return {i, sumMap[find_num]};
            }
        }
        return {}; 
    }
};