#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string merged = "";
        size_t i = 0;
        size_t j = 0;

        while (i < word1.length() && j < word2.length()){
            merged = merged + word1[i];
            merged = merged + word2[j];
            i++;
            j++;
        }

        while (i < word1.length()){
            merged = merged + word1[i];
            i++;
        }

        while (j < word2.length()){
            merged = merged + word2[j];
            j++;
        }

        return merged;

    }
};