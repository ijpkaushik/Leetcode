// { Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function template for C++

class Solution {
  public:
    int getMinDiff(int a[], int n, int k) {
        sort(a, a+n);
        int ans=a[n-1]-a[0];
        int mn, mx;
        for(int i=0; i<n; i++){
            mn=min(a[0]+k, a[i+1]-k);
            mx=max(a[i]+k, a[n-1]-k);
            if(mn<0)
                continue;
            
            ans=min(ans, mx-mn);
        }
        return ans;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> k;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.getMinDiff(arr, n, k);
        cout << ans << "\n";
    }
    return 0;
}  // } Driver Code Ends