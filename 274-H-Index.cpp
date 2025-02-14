class Solution {
public:
    int hIndex(vector<int>& citations) {
        sort(citations.begin(), citations.end());
        for (int i = 0; i < citations.size(); i++){
            if (citations[i] >= citations.size() - i){
                int answer = citations.size() - i;
                return answer;
            }
        }
        return 0;
    }
};