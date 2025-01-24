class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()){
            return \\;
        }
        // compare the first word to all the other words. Return the prefix found from all the comparisons.  
        
        string prefix = strs[0];
        
        for (int i = 0; i < strs.size(); i++) { 
            int j = 0;
            while (j < prefix.size() && j < strs[i].size() && prefix[j] == strs[i][j]){
                j++;
            }
            prefix = prefix.substr(0, j);
            if (prefix.size() == 0){
                break;
            }
        }
        return prefix;
    }
};