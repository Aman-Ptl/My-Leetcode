class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m= matrix.size();
        int n=matrix[0].size();
        bool firstRowImpacted = false;
        bool firstColImpacted = false;

        // check if first row has any zero
        for (int col=0; col<n; col++){
            if(matrix[0][col]==0){
                firstRowImpacted=true;
                break;
            }
        }

        // check if first col has any zero
        for (int row=0; row<m; row++){
            if(matrix[row][0]==0){
                firstColImpacted=true;
                break;
            }
        }

        // set marker in the first row/col
        for(int i=1; i<m; i++){
            for(int j=1; j<n; j++){   // ✅ start from j=1
                if(matrix[i][j]==0){
                    matrix[i][0]=0;
                    matrix[0][j]=0;
                }
            }
        }

        // update the matrix based on markers
        for(int i=1; i<m; i++){
            for(int j=1; j<n; j++){
                if(matrix[i][0]==0 || matrix[0][j]==0){
                    matrix[i][j] = 0;   // ✅ assignment fixed
                }
            }
        }

        // handle first row
        if(firstRowImpacted){
            for(int j=0;j<n;j++){
                matrix[0][j]=0;
            }
        }

        // handle first col
        if(firstColImpacted){
            for(int i=0;i<m;i++){
                matrix[i][0]=0;
            }
        }
    }
};
