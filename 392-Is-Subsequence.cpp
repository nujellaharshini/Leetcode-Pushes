class Solution {
public:
    bool isSubsequence(string s, string t) {
        if (s.size() == 0){
            return true;
        }
        int finder = 0;
        for (int i = 0; i < t.size(); i++){
            if (t[i] == s[finder]){
                finder++;
                if (finder == s.size()){
                    return true;
                }
            }
        }
        return false;
    }
};