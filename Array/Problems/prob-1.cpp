//Set Zero Matrix
//Optimize - By taking the Dummy matrix Row & Columns
//By traversing from the back - Dont traverse from start 
//Time complexity = 2 * (N*M)
//Spacecomplexity = O(1)

void setZeroes(vector<vector<int> > &matrix) {
    int col0 = 1, rows = matrix.size(), cols = matrix[0].size();

    for (int i = 0; i < rows; i++) {
        if (matrix[i][0] == 0) col0 = 0;
        for (int j = 1; j < cols; j++)
            if (matrix[i][j] == 0)
                matrix[i][0] = matrix[0][j] = 0;
    }

    for (int i = rows - 1; i >= 0; i--) {
        for (int j = cols - 1; j >= 1; j--)
            if (matrix[i][0] == 0 || matrix[0][j] == 0)
                matrix[i][j] = 0;
        if (col0 == 0) matrix[i][0] = 0;
    }
}



//@nd approach 
    void setZeroes(vector<vector<int>>& a) {
        int n = a.size();
        int m = a[0].size();
        bool firstRow = false;  // do we need to set first row zero
        bool firstCol = false;  // do we need to ser first col zero
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
					if(a[i][j] == 0){   // store rows and cols state in first row and col
                    if(i==0) firstRow = true;
                    if(j==0) firstCol = true;
                    a[i][0] = 0;
                    a[0][j] = 0;
                }
            }
        }
        // cout<<firstRow<<" "<<firstCol<<endl;
        for(int i=1; i<n; i++){
            for(int j=1; j<m; j++){
                if(a[i][0] == 0 || a[0][j] == 0){
                    a[i][j] = 0;
                }
            }
        }
        
        if(firstRow){
            for(int i=0;i<m;i++) a[0][i] = 0;
        }
        
        if(firstCol){
            for(int i=0;i<n;i++) a[i][0] = 0;
        }
    }


    //3rd approach 
    class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int R = matrix.size();
        int C = matrix[0].size();
        set<int> rows ;
        set<int> cols ;
        // We mark the rows and columns that are to be made zero
        for (int i = 0; i < R; i++) 
        {
          for (int j = 0; j < C; j++) 
          {
            if (matrix[i][j] == 0) 
            {
                rows.insert(i);
                cols.insert(j);
            }
          }
        }
        // Iterate over the array once again and using the rows and cols sets, update the elements.
        for (int i = 0; i < R; i++) 
        {
          for (int j = 0; j < C; j++) 
          {
            if (rows.count(i) || cols.count(j)) 
            {
              matrix[i][j] = 0;
            }
          }
        }
    }
};