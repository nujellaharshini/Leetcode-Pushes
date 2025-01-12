#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    string reverseWords(string s) {
        // remove the leading trails
        int left = 0;
        int right = s.length() - 1;

        while (s[left] == ' ' && left <= right){
            left++;
        }
        while(s[right] == ' ' && left <= right){
            right --;
        }

        // splitting the string into words
        vector<string> words;
        string w = "";

        for (int i = left; i <= right; i++){
            if (s[i] != ' '){
                w = w + s[i];
            } else if (!w.empty()){
                words.push_back(w);
                w = "";
            }
        }

        // Push the last word
        if (!w.empty()){
            words.push_back(w);
        }

        // reverse the words
        string answer = "";
        reverse(words.begin(), words.end());

        for (int j = 0; j < words.size(); j++){
            answer = answer + words[j];
            if (j < words.size() - 1) {
                answer = answer + ' ';
            }
        }

        return answer;
    }
};