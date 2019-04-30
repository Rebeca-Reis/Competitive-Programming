//https://practice.geeksforgeeks.org/problems/find-whether-path-exist/0

#include <bits/stdc++.h>
using namespace std;

class Graph{
    int n;
    vector<vector<int>> grid;
    vector<vector<int>> vis;
public:
    Graph(int n):n(n){
        vis.assign(n,vector<int>(n,0));
    }
    void addRow(vector<int> r){
        grid.push_back(r);
    }
    bool bfs(int r, int c);
    bool inside(int i, int j);
};

bool Graph::inside(int i, int j){
    if(i<0 or i>=n) return false;
    if(j<0 or j>=n) return false;
    return true;
}

bool Graph::bfs(int r, int c){
    queue<pair<int,int>> q;
    q.push({r,c});
    int dx[4]={1,-1,0,0};
    int dy[4]={0,0,1,-1};
    while(!q.empty()){
        pair<int,int> curr = q.front();
        q.pop();
        if(vis[curr.first][curr.second]==1) continue;
        vis[curr.first][curr.second]=1;
        if(grid[curr.first][curr.second]==2) return true;
        for(int i=0;i<4;i++){
            if(inside(curr.first+dx[i],curr.second+dy[i])){
                if(( grid[curr.first + dx[i]][curr.second+dy[i]]==3 or grid[curr.first + dx[i]][curr.second+dy[i]]==2) and !vis[curr.first + dx[i]][curr.second+dy[i]]) 
                    q.push({curr.first + dx[i], curr.second + dy[i]});
            }
        }
    }
    return false;
}

int main() {
    int t;
    cin >> t;
    while(t--){
        int n,x;
        int r, c;
        cin >> n;
        Graph *g = new Graph(n);
        for(int i=0;i<n;i++){
            vector<int> aux;
            for(int j=0;j<n;j++){
               cin >> x;
               if(x==1) r=i, c= j;
               aux.push_back(x);
            }
            g->addRow(aux);
        }
        bool ans = g->bfs(r,c);
        if(ans) cout << 1 << endl;
        else cout << 0 << endl;
        delete g;
    }
}