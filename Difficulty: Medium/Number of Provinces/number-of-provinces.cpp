//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
  
    void bfs(int node, vector<vector<int>> &adj, vector<bool> &viz){
        
        queue<int> q;
        q.push(node);
        // viz[node] = true;
        
        while(!q.empty()){
            int front = q.front();
            q.pop();
            
            viz[front] = true;
            for(int i=0; i<adj[front].size(); i++){
                if(!viz[i] && adj[front][i]==1) q.push(i);
            }
        }
    
    }
    
    int numProvinces(vector<vector<int>> adj, int V) {
        // code here
        vector<bool> viz(V, false);
        int count = 0;
        for(int i=0; i<V; i++){
            if(!viz[i]){
                bfs(i, adj, viz);
                count++;
            }
        }
        
        return count;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int V,x;
        cin>>V;
        
        vector<vector<int>> adj;
        
        for(int i=0; i<V; i++)
        {
            vector<int> temp;
            for(int j=0; j<V; j++)
            {
                cin>>x;
                temp.push_back(x);
            }
            adj.push_back(temp);
        }
        

        Solution ob;
        cout << ob.numProvinces(adj,V) << endl;
    
cout << "~" << "\n";
}
    return 0;
}
// } Driver Code Ends