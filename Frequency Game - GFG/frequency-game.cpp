// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// User function Template for C++

int LargButMinFreq(int arr[], int n) {
    int largeNo=0, minF=1;
    unordered_map<int,int> m;
    for( int i=0; i<n; i++){
        m[arr[i]]++;
    }
    
    for(auto itr : m){
        if(itr.second<=minF){
            minF=itr.second;
            if(itr.first > largeNo)
                largeNo = itr.first;
        }
    }
    return largeNo;
}

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    // Iterating over testcases
    while (t--) {
        int n;
        cin >> n;

        int arr[n];

        for (int i = 0; i < n; i++) cin >> arr[i];

        cout << LargButMinFreq(arr, n) << endl;
    }
}  // } Driver Code Ends