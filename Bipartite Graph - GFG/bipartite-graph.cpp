// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
public:
	bool isBipartite(int V, vector<int>adj[]){
	    int color[V];
	    memset(color, -1, sizeof(color));
	    queue<int> q;
	  
	for(int i=0; i<V; i++){
	    if(color[i]==-1){
	        color[i]=1;
	        q.push(i);
	        
	        while(!q.empty()){
	            int node=q.front();
	            q.pop();

	            for(auto itr:adj[node]){
	                if(color[itr]==-1) {
	                    color[itr]=!color[node];
	                    q.push(itr);
	                }  
	                else if(color[itr]==color[node])
	                    return false;
	            }
	        }
	    }
	}
	    return true;
	}

};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int V, E;
		cin >> V >> E;
		vector<int>adj[V];
		for(int i = 0; i < E; i++){
			int u, v;
			cin >> u >> v;
			adj[u].push_back(v);
			adj[v].push_back(u);
		}
		Solution obj;
		bool ans = obj.isBipartite(V, adj);    
		if(ans)cout << "1\n";
		else cout << "0\n";  
	}
	return 0;
}  // } Driver Code Ends