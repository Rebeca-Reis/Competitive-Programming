//https://practice.geeksforgeeks.org/problems/minimum-cost-path/0

#include <bits/stdc++.h>
using namespace std;

class Graph{
    vector<vector<int>> grid;
    vector<vector<int>> dist;
    vector<vector<int>> vis;
    int n;
 public:
    Graph(int n):n(n){};
    bool out(int i, int j);
    int minCost();
    void addRow(vector<int> r){
        grid.push_back(r);
    }
    void setDist();
    void setVis();
}; 

void Graph::setDist(){
    for(int i=0;i<n;i++){
        vector<int> aux;
        for(int j=0;j<n;j++){
            aux.push_back(INT_MAX);
        }
        dist.push_back(aux);
    }
}

void Graph::setVis(){
    for(int i=0;i<n;i++){
        vector<int> aux;
        for(int j=0;j<n;j++){
            aux.push_back(0);
        }
        vis.push_back(aux);
    }
}

bool Graph::out(int i, int j){
    if(i<0 or i>=n) return true;
    if(j<0 or j>=n) return true;
    return false;
}

int Graph::minCost(){
    dist[0][0]=grid[0][0];
    priority_queue< pair<int, pair<int,int> > > pq;
    pq.push(make_pair(-grid[0][0], make_pair(0,0) ));
    int dx[4]={1,-1,0,0};
    int dy[4]={0,0,1,-1};
    while(!pq.empty()){
        int d = -pq.top().first;
        pair<int,int> cell = pq.top().second;
        pq.pop();
        if(vis[cell.first][cell.second]==1) continue;
        vis[cell.first][cell.second]=1;
        if(d>dist[cell.first][cell.second]) continue;
        for(int i=0;i<4;i++){
            
            if(!out(cell.first+dx[i],cell.second+dy[i])){
                
                int w = grid[cell.first+dx[i]][cell.second+dy[i]];
                pair<int,int> cellVis = make_pair(cell.first+dx[i],cell.second+dy[i]);
                
                if(w+dist[cell.first][cell.second]<dist[cellVis.first][cellVis.second]){
                    
                    dist[cellVis.first][cellVis.second] = w+dist[cell.first][cell.second];
                    pq.push(make_pair( -dist[cellVis.first][cellVis.second], cellVis));
                }
            }
        }
    }
    return dist[n-1][n-1];
}

int main() {
	int t;
	cin >> t;
	while(t--){
	    int n, x;
	    cin >> n;
	     Graph *g = new Graph(n);
	    for(int i=0;i<n;i++){
	        vector<int> curr;
	        for(int  j=0;j<n;j++){
	            cin >> x;
	            curr.push_back(x);     
	        }
	        g->addRow(curr);
	    }
	    g->setDist();
	    g->setVis();
	    cout << g->minCost() << endl;
	    delete g;
	}
}