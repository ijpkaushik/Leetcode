class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.length();
        if(n==0)
            return 0;        
       
        set<char> us;
        int i=0,j=0, maxS=0;
        while(j<n){
            if(us.count(s[j])==0){
                us.insert(s[j]);
                j++;
                maxS=max(maxS, (int)us.size());
            }
            else{
                us.erase(s[i]);
                i++;
            }
        }
        return maxS;
    }
};