// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    // Function to detect cycle in a directed graph.
    
    bool isCyclicUtil(int i, vector<int> adj[], int visited[], int recStack[]){
            visited[i]=true;
            recStack[i]=true;
            for(auto ptr : adj[i]){
                if(!visited[ptr] && isCyclicUtil(ptr, adj, visited, recStack))
                    return true;
                else if(recStack[ptr])
                    return true;
            }
            
        recStack[i]=false;
        return false;
    }
    
    bool isCyclic(int V, vector<int> adj[]) {
        int visited[V],recStack [V];
        memset(visited,0,sizeof visited);
        memset(recStack ,0,sizeof recStack);

        for(int i=0; i<V; i++){
            if(!visited[i] && isCyclicUtil(i, adj, visited, recStack))
                return true;
        }
        return false;
    }
};

// { Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        int V, E;
        cin >> V >> E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
        }

        Solution obj;
        cout << obj.isCyclic(V, adj) << "\n";
    }

    return 0;
}
  // } Driver Code Ends