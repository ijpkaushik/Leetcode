class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<vector<int>> triangle(rowIndex+1);
        vector<int> ans;
        triangle[0].push_back(1);

        for(int i=1; i<=rowIndex; i++){
            triangle[i].push_back(1);
            for( int j = 1; j < i; j++){
                triangle[i].push_back(triangle[i-1][j-1]+triangle[i-1][j]);  
            }
            triangle[i].push_back(1);            
        }
        for(int i=0; i<triangle[rowIndex].size(); i++)
            ans.push_back(triangle[rowIndex][i]);
        return ans;
    }
};