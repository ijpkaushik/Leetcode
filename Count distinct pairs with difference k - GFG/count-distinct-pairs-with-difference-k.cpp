// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
	public:
	int TotalPairs(vector<int>nums, int k){
	    map<int, int> m;
	    int count=0;
	    for(int i=0; i<nums.size(); i++){
	        m[nums[i]]++;
	    }
	    for( auto itr : m){
	        if(k==0){
                if(itr.second>1){
                    count++;
                }
            }
        else{
            if(m.find(itr.first-k)!=m.end()){
                count++;
            }
        }
	    }
	    return count;
    }
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, k;
		cin >> n >> k;
		vector<int>nums(n);
		for(int i = 0; i < n; i++)
			cin >> nums[i];
		Solution ob;
		int ans = ob.TotalPairs(nums, k);
		cout << ans <<"\n";
	}
	return 0;
}  // } Driver Code Ends