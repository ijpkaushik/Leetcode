// { Driver Code Starts
// Driver function
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
public:
    string reciprocalString(string S)
    {
        for(int i=0; i<S.size(); i++){
            if(islower(S[i]))
                S[i]='a'+'z'-S[i];
            
            else if(isupper(S[i]))
                S[i]='A'+'Z'-S[i];
            else
                S[i]=S[i];
        }
        return S;
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    string S;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        getline(cin,S);
        Solution ob;
        string reciprocal = ob.reciprocalString(S);
        cout<< reciprocal <<endl;

    }

	return 0;
}  // } Driver Code Ends