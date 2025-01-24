class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char, int> map;
        int sum = 0;
            
        map['I'] = 1;
        map['V'] = 5;
        map['X'] = 10;
        map['L'] = 50;
        map['C'] = 100;
        map['D'] = 500;
        map['M'] = 1000;
            
        for (int i = 0; i < s.size(); i++) {
            if (i < s.size() - 1 && (s[i] == 'I' && (s[i+1] == 'V' || s[i+1] == 'X')) || 
                (s[i] == 'X' && (s[i+1] == 'L' || s[i+1] == 'C')) || 
                (s[i] == 'C' && (s[i+1] == 'D' || s[i+1] == 'M'))) {
                sum -= map[s[i]]; 
            } else {
                sum += map[s[i]];
            }
        }
        return sum; 
    }
};