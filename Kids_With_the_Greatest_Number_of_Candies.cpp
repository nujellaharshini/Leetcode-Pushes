#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> output;
        int max_candy = *max_element(candies.begin(), candies.end());

        for (size_t i = 0; i < candies.size(); i++){
            if (candies[i] + extraCandies >= max_candy){
                output.push_back(true);
            } else {
                output.push_back(false);
            }
        }
        return output;
    }
};