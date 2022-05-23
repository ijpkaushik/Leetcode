class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string ms="";
        int i=0, j=0, k=0;
        while(i<word1.size() && j<word2.size()){
            if(k%2==0){
                ms+=word1[i]; 
                i++;
                k++;
            } 
            else{
                ms+=word2[j];
                j++;
                k++;
            }
        }
        if(i!=word1.size()){
            while(i<word1.size()){
                ms+=word1[i]; 
                i++;
            }
        }
        if(j!=word2.size()){
            while(j<word2.size()){
                ms+=word2[j]; 
                j++;
            }
        }
        return ms;
    }
};