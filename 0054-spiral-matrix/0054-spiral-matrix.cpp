class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        if (matrix.size() == 0 || matrix[0].size() == 0)
        return {};
        int m=matrix.size(); //rows
        int n= matrix[0].size(); //coloumns
        int dir=0;
        int top=0;
        int bottom=m-1;
        int left=0;
        int right=n-1;

        /*
        dir=0 : left to right 
        dir=1 : Top to bottom 
        dir=2 : Right to Left
        dir=3 : Bottom to Top
        */
        vector<int> result;
        while (top <= bottom && left <= right) {
    if (dir == 0) {
        for (int i = left; i <= right; i++) {
            result.push_back(matrix[top][i]);
        }
        top++;
    } else if (dir == 1) {
        for (int i = top; i <= bottom; i++) {
            result.push_back(matrix[i][right]);
        }
        right--;
    } else if (dir == 2) {
        for (int i = right; i >= left; i--) {
            result.push_back(matrix[bottom][i]);
        }
        bottom--;
    } else if (dir == 3) {
        for (int i = bottom; i >= top; i--) {
            result.push_back(matrix[i][left]);
        }
        left++;
    }
    dir = (dir + 1) % 4;
}
    return result;
    }
};