class Solution {
public:
    int lengthOfLastWord(string s) {
        if (s.size() == 1){
            return 1;
        }
        int size = 0;
        for (int i = s.size() - 1; i >= 0; i--){
            if (s[i] != ' '){
                size++;
            } else if (s[i] == ' ' && size != 0){
                break;
            }
        }
        return size;
    }
};