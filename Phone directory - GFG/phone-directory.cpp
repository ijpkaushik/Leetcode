// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    vector<vector<string>> displayContacts(int n, string contact[], string s)
    {
        set<string> m;
        for(int i=0; i<n; i++){
             m.insert(contact[i]);
        }
        
        vector<string> res;
        for(auto x : m)
        {
            res.push_back(x);
        }
        
        vector<vector<string>>vec;
        for(int i=0;i<s.length();i++)
        {
            vector<string> ans;
            ans.clear();
            for(int j=0;j<res.size();j++)
            {
                string s1 = s.substr(0,i+1);
                string s2 = res[j].substr(0,i+1);
                if(s1==s2)
                {
                    ans.push_back(res[j]);
                }
            }
            if(ans.size()!=0)
            {
                vec.push_back(ans);
            }
            else
            {
                ans.push_back("0");
                vec.push_back(ans);
            }
        }
        
        
        return vec;
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string contact[n], s;
        for(int i = 0;i < n;i++)
            cin>>contact[i];
        cin>>s;
        
        Solution ob;
        vector<vector<string>> ans = ob.displayContacts(n, contact, s);
        for(int i = 0;i < s.size();i++){
            for(auto u: ans[i])
                cout<<u<<" ";
            cout<<"\n";
        }
    }
    return 0;
}  // } Driver Code Ends