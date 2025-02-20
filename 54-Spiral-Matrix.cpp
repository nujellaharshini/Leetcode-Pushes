class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> answer;
        int up = 0;
        int down = matrix.size() - 1;
        int right = matrix[0].size() - 1;
        int left = 0;

        while (left <= right && up <= down){
            for (int i = left; i <= right; i++){
                answer.push_back(matrix[up][i]);
            }
            up++;

            if (up <= down){
                for (int i = up; i <= down; i++){
                    answer.push_back(matrix[i][right]);
                }
                right--;
            }

            if (down >= up){
                for (int i = right; i >= left; i--){
                    answer.push_back(matrix[down][i]);
                }
                down--;
            }

            if (right >= left){
                for (int i = down; i >= up; i--){
                    answer.push_back(matrix[i][left]);
                }
                left++;
            }
        }

        return answer;
    }
};