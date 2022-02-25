class Solution {
public:
    int titleToNumber(string columnTitle) {
        int num = 0;
        int N = columnTitle.length();
        for(int j = 0; j < N; j++){
            int intAlpha = int(columnTitle[j]) -64;            
            // if( j == N-1)
            //     num+=intAlpha;
            // else if( j == N-2)
            //     num += intAlpha*26;
            // else
            //     num += intAlpha*26*26;
            num += intAlpha*pow(26, N-j-1);
        }
        return num;
    }
};