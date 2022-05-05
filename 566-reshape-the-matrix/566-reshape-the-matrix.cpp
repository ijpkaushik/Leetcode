class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        vector<vector<int>> ans(r);
        int imat=0, jmat=0;
        if(r*c != (mat.size())*(mat[0].size())){
            return mat;
        }
        
        for(int i=0; i<mat.size(); i++){            
            for(int j=0; j<mat[i].size(); ){
                if(jmat<c){
                    ans[imat].push_back(mat[i][j]);
                    jmat++;
                    j++;
                }
                else{
                    imat++;
                    jmat=0;
                }
            }
        }          
        return ans;
    }
};