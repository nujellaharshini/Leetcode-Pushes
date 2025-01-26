class Solution {
public:
    bool isPalindrome(string s) {
        for (int i = 0; i < s.size(); i++){
            s[i] = tolower(s[i]); 
        }

        string new_string = \\;
        for (int i = 0; i < s.size(); i++){
            if (isalpha(s[i]) || isdigit(s[i])){
                new_string += s[i];
            }
        }

        int left = 0;
        int right = new_string.size() - 1;
        while (left < right){
            if(new_string[left] != new_string[right]){
                return false;
            }
            left++;
            right--;
        }

        return true;
    }
};