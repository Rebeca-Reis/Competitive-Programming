//https://practice.geeksforgeeks.org/problems/detect-cycle-in-a-directed-graph/1

{
#include<bits/stdc++.h>
using namespace std;
bool isCyclic(vector<int> g[], int V);
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        vector<int> g[101];
        int V, E;
        cin>>V>>E;
        for(int i=0;i<E;i++)
        {
            int u,v;
            cin>>u>>v;
            g[u].push_back(v);
        }
        cout << isCyclic(g, V);
        cout << endl;
    }
}

}


// The array of vectors g[] stores adjacency list 
// representation of a directed graph. Here g[u] 
// is a vector containing all adjacent of vertex u.
/*You are required to complete this method*/

void dfs(int u, vector<int> &vis, bool &ans, vector<int> g[]){
    if(vis[u]==2){
        ans=true;
        return;
    }
    if(vis[u]==1) return;
    vis[u]=2;
    for(int v : g[u]){
        dfs(v,vis,ans,g);
    }
    vis[u]=1;
}

bool isCyclic(vector<int> g[], int V){
    vector<int> vis(V,0);
    bool ans= false;
    for(int u=0;u<V;u++){
        if(vis[u]==0)  dfs(u, vis, ans, g);
        if(ans) return true;
    }
    return ans;
}