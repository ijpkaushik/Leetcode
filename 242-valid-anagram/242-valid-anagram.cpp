class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char, int> mp;
        for(int i=0; i<s.length(); i++){
            mp[s[i]]++;
        }
        for(int i=0; i<t.length(); i++){
            if(!mp[t[i]]){
                return false;
            }
            mp[t[i]]--;
        }
        for(auto i : mp){
            if(i.second){
                return false;
            }
        }
        return true;
    }
};