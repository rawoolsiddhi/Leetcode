class Solution {
    public:

vector<int> generateRow(int rows){
    long long ans=1;
    vector<int> ansrow;
    ansrow.push_back(1);
   
    for(int i=1; i<rows; i++){
        ans = ans*(rows-i);
        ans=ans/i;
        ansrow.push_back(ans);
    }
    return ansrow;
    
}
     vector<vector<int>> generate(int numRows) {
          vector<vector<int>> ans;

    //store the entire pascal's triangle:
    for (int row = 1; row <= numRows; row++) {
        ans.push_back(generateRow(row));
    }
    return ans;
}
 };
