// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{

  public:
    vector<int> duplicates(int arr[], int n) {
        int ht[n]={0};
        for(int i=0;i<n;i++) 
            ht[arr[i]]++;
        
        sort(arr,arr+n); 
        vector<int> v1; 
        for(int i=0;i<n;i++) 
        {  if(ht[arr[i]]>1)  
           v1.push_back(arr[i]),ht[arr[i]]=0;
            
        }
        if(v1.size()==0) return {-1};
        return v1;
    }
};


// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        Solution obj;
        vector<int> ans = obj.duplicates(a, n);
        for (int i : ans) cout << i << ' ';
        cout << endl;
    }
    return 0;
}
  // } Driver Code Ends