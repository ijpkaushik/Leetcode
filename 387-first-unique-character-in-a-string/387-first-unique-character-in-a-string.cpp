class Solution {
public:
    int firstUniqChar(string s) {
        // deque<char> dq;
        // for(int i=0; i<s.size(); i++){
        //     deque<int>::iterator itr;
        //     itr = find(dq.begin(), dq.end(), s[i]);
        //     if(dq.find(itr==dq.end())){
        //         dq.push_back(s[i]);
        //     }
        //     else{
        //         dq.pop_front();
        //     }
        // }
        // return dr.front();
        int arr[26] = {0};
        
        for(int i=0;i<s.length();i++)
        {
           arr[s[i]-'a']++;
        }
        
        
        for(int i =0 ;i<s.length();i++)
        {
            if(arr[s[i]-'a'] ==1)
                return i;
        }
        return -1;
    }
};