class Solution {
public:

int ncr(int n, int r){
        long long res=1;

     for (int i = 0; i < r; i++) {
        res = res * (n - i);
        res = res / (i + 1);
    }
    return (int)(res);
        }

    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
       
        for(int row=1; row<=numRows; row++){
              vector<int> tempList;
            for(int col=1; col<=row; col++){
                tempList.push_back(ncr(row-1, col-1));
            }
            ans.push_back(tempList);
        }

        return ans;

    }
};
