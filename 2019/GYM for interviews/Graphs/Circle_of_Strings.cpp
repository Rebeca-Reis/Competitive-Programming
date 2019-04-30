//https://practice.geeksforgeeks.org/problems/circle-of-strings/0

#include <bits/stdc++.h>
using namespace std;

class Node{
    char c;
    vector<Node*> adj;
    int inc, out, vis;
public:
    Node(char u):c(u), inc(0), out(0), vis(0){};
    void incrementInc(){inc++;}
    void incrementOut(){out++;}
    vector<Node*> getAdj(){return adj;}
    int getInc(){ return inc;}
    int getOut(){ return out;}
    int getVis(){ return vis;}
    void addEdge(Node* n){ adj.push_back(n);}
    void setVis(){ vis=1;}
};

class Graph{
    unordered_map<char, Node*> nodes;
public:
    void buildGraph(vector<string> &dic);
    bool checkIncOut();
    void dfs(Node* n);
    bool canBeChained();
    unordered_map<char, Node*> getNodes(){return nodes;}
};

void Graph::buildGraph(vector<string> &dic){
    for(string s : dic){
        char first, last;
        first = s.front();
        last = s.back();
        if(nodes.count(first)==0) nodes[first]= new Node(first);
        if(nodes.count(last)==0) nodes[last]= new Node(last);
        if(nodes[first]==nodes[last]) continue;
        nodes[first]->incrementOut();
        nodes[last]->incrementInc();
        nodes[first]->addEdge(nodes[last]);
    }
}

bool Graph::checkIncOut(){
    for(auto x : nodes){
        if(x.second->getInc() != x.second->getOut()) return false;
    }
    return true;
}

void Graph::dfs(Node* n){
    if(n->getVis()==1) return;
    n-> setVis();
    for(auto neighbour : n->getAdj()){
        if(neighbour->getVis()==0) dfs(neighbour);
    }
}

bool Graph::canBeChained(){
    for(auto x : nodes){
        if(x.second->getVis()==0) return false;
    }
    return true;
}

int main() {
    int t,n;
    string s;
    cin >> t;
    while(t--){
        vector<string> dic;
        cin >> n;
        for(int i=0;i<n;i++){
            cin >> s;
            dic.push_back(s);
        }
        Graph *g = new Graph();
        g->buildGraph(dic);
        bool ans = g->checkIncOut();
        if(ans==false){ 
            cout << 0 << endl;
            continue;
        }
        unordered_map<char,Node*> ns = g->getNodes();
        pair<char, Node*> aux = *(ns.begin());
        g->dfs(aux.second);
        ans=g->canBeChained();
        if(ans) cout << 1 << endl;
        else cout << 0 << endl;
    }
	
}