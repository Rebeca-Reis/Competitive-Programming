//https://leetcode.com/problems/network-delay-time/
#include <bits/stdc++.h>
using namespace std;

class Node{
    int n;
    vector<Node*> adj;
    vector<int> adjw;
    int vis;
    int dist;
public:
    Node(int n):n(n),vis(0),dist(INT_MAX){};
    void addNeighbour(Node* u, int w){
        adj.push_back(u);
        adjw.push_back(w);
    }
    void setVis(){
        vis=1;
    }
    bool isVisited(){
        return (vis==1) ? true : false;
    }
    int getDist(){
        return dist;
    }
    void setDist(int d){
        dist=d;
    }
    vector<Node*> getAdj(){
        return adj;
    }
    vector<int> getAdjw(){
        return adjw;
    }
    int getN(){
        return n;
    }
    
};

class Graph{
    unordered_map<int,Node*> nodes;
    int n;
    int k;
public:
    Graph(int n, int k):n(n),k(k){};
    void dijkstra();
    int timeForAllToReceive();
    void addEdge(int u, int v, int w);
    ~Graph(){
        for(auto x : nodes){
            delete x.second;
        }
    }
};

void Graph::dijkstra(){
    Node* u = nodes[k];
    u->setDist(0);
    priority_queue<pair<int,Node*>> pq;
    pq.push({0,u});
    while(!pq.empty()){
        Node* curr = pq.top().second;
        int d = - pq.top().first;
        pq.pop();
        if(d > curr->getDist()) continue;
        if(curr->isVisited()) continue;
        curr->setVis();
        for(int i=0;i<curr->getAdj().size();i++){
            Node* v = curr->getAdj()[i];
            int w = curr->getAdjw()[i];
            if(!v->isVisited()){
                if(curr->getDist()+w < v->getDist()){
                    v->setDist(w+curr->getDist());
                    pq.push({- v->getDist(),v});
                }
            }
        }
    }
}

int Graph::timeForAllToReceive(){
    int ans=0;
    for(auto x : nodes){
        ans=max(ans,x.second->getDist());
    }
    if(ans==INT_MAX) return -1;
    if(n>nodes.size()) return -1;
    return ans;
}

void Graph::addEdge(int u, int v, int w){
    if(nodes.count(u)==0){
        nodes[u] = new Node(u);
    }
    if(nodes.count(v)==0){
        nodes[v] = new Node(v);  
    } 
    Node* nu = nodes[u];
    Node* nv = nodes[v];
    nu->addNeighbour(nv,w);
}

class Solution {
public:
    int networkDelayTime(vector<vector<int>>& times, int N, int K) {
        Graph *g = new Graph(N,K);
        for(vector<int> list : times){
            g->addEdge(list[0],list[1],list[2]);
        }
        g->dijkstra();
        int ans = g->timeForAllToReceive();
        delete g;
        return ans;
    }
};