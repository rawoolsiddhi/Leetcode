// Given an m x n integer matrix matrix, if an element is 0, set its entire row and column to 0's.
//   Example 1:
//   
// Input: matrix = [[1,1,1],[1,0,1],[1,1,1]]
// Output: [[1,0,1],[0,0,0],[1,0,1]]

// Constraints:

// m == matrix.length
// n == matrix[0].length
// 1 <= m, n <= 200
// -231 <= matrix[i][j] <= 231 - 1



// brute
class Solution1 {
    
public:
       
    void setZeroes(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();

        //method 1
        for(int i=0; i<m;i++){
            for(int j=0; j<n; j++){
                if(matrix[i][j]==0){
                    markR(matrix,i,n);
                    markC(matrix,j,n);
                }
            }

             }

             mat(matrix,n,m);
        }

 void markR(vector<vector<int>>& matrix, int i, int n){
     for(int j =0;j<n; j++){
         if(matrix[i][j]!=0){
             matrix[i][j]=-1;
         }
     }
 }

 void markC(vector<vector<int>>& matrix, int j, int n){
     for(int i =0;i<n; i++){
         if(matrix[i][j]!=0){
             matrix[i][j]=-1;
         }
     }
 }

 void mat(vector<vector<int>>& matrix,int n,int m){
     for(int i=0; i<m;i++){
            for(int j=0; j<n; j++){
                if(matrix[i][j]==-1){
                    matrix[i][j] = 0;
                }

 }
     }
 
    }
};



// better 
class Solution2 {
    
public:
       
    void setZeroes(vector<vector<int>>& matrix) {

        int m = matrix.size();
        int n = matrix[0].size();
        vector<int> col(n,0);
        vector<int> row(m,0);
        

        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(matrix[i][j]==0){
                    col[j]=1;
                    row[i]=1;
                }
            }
        }

        for(int i=0; i< m; i++){
            for(int j=0; j<n; j++){
                if(row[i] || col[j]){
                    matrix[i][j]=0;
                }
            }
        }
    }
    
 };


// optimal solution.

class Solution {
    
public:
       
    void setZeroes(vector<vector<int>>& matrix) {
        
        int m = matrix.size();
        int n = matrix[0].size();
        int col = 1;

       for(int i=0; i<m;i++){
           for(int j=0; j<n; j++){
               if(matrix[i][j]==0){
                   matrix[i][0]=0;
                   if(j != 0){
                   matrix[0][j]=0;
                   }
                   else{
                       col = 0;
                   }
               }
           }
       }

       for(int i=1; i<m;i++){
           for(int j=1; j<n; j++){
               if(matrix[i][j] != 0){
               if(matrix[0][j]==0 || matrix[i][0]==0){
                   matrix[i][j]=0;
               }
               }
           }
       }

       if(matrix[0][0]==0){
           for(int j=0; j<n; j++){
               matrix[0][j]=0;
           }
       }

       if(col==0){
           for(int i=0;i<m;i++){
               matrix[i][0]=0;
           }
       }
        
    }

    
};
