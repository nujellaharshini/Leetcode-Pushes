#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    string reverseVowels(string s) {
        string vowels = "aeiouAEIOU";
        int left = 0; 
        int right = s.size() - 1;

        while (left < right){
            while (left < right && vowels.find(s[left]) == string::npos){
                left++;
            }

            while (left < right && vowels.find(s[right]) == string::npos){
                right --;
            }

            if (vowels.find(s[left]) != string::npos && 
            vowels.find(s[right]) != string::npos){
                swap(s[left], s[right]);
                left++;
                right--;
            }
        }
        return s;
    }
};