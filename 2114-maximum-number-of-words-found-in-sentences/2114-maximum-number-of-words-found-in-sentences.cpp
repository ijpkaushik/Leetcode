class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int countWords;
        int maxWord=0;
        for(int i=0; i<sentences.size(); i++){
            countWords=1;
            for(int j=0; j<sentences[i].size(); j++){
                if(sentences[i][j]==' '){
                    countWords++;
                }
            }
            if(countWords>maxWord)
                maxWord=countWords;
        }
        return maxWord;
    }
};