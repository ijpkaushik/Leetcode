class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        // int l=ransomNote.length();
        // int n=magazine.length();
        // for(int i=0; i< n-l; i++){
        //     string str=magazine.substr(i, l);
        //     if(str==ransomNote){
        //         return true;
        //     }
        // }
        // return false;
        
        map<char, int> mp;
        for(int i=0; i< magazine.length(); i++){
            mp[magazine[i]]++;
        }
        for(int i=0; i< ransomNote.length(); i++){
            if(!mp[ransomNote[i]]){
                return false;
            }
            mp[ransomNote[i]]--;
        }
        return true;
    }
};