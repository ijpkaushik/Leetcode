class Solution {
public:
    string toLowerCase(string s) {
        char c;
        for(int i=0; i<s.size(); i++){
            c=tolower(s[i]);
            s[i]=c;
        }
        return s;
    }
};