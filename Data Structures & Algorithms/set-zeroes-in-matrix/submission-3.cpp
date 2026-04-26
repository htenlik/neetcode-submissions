class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int rows = matrix.size(), cols = matrix[0].size();
        bool zeroatcolumnzero = false;
        for(auto x: matrix){
            for(auto y: x) cout << y << " ";
            cout << endl;
        }
        for (int i = 0; i < rows; i++) {
            if(!matrix[i][0]) zeroatcolumnzero = true;
            for (int j = 1; j < cols; j++)
                if (matrix[i][j] == 0)
                    matrix[i][0] = matrix[0][j] = 0;
        }
        cout << endl;
        for(auto x: matrix){
            for(auto y: x) cout << y << " ";
            cout << endl;
        }

        for (int i = rows - 1; i >= 0; i--) {
            for (int j = cols - 1; j >= 1; j--)
                if (matrix[i][0] == 0 || matrix[0][j] == 0)
                    matrix[i][j] = 0;
            if(zeroatcolumnzero) matrix[i][0] = 0;
        }
        cout << endl;
        for(auto x: matrix){
            for(auto y: x) cout << y << " ";
            cout << endl;
        }
    }
};
