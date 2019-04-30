//https://practice.geeksforgeeks.org/problems/alien-dictionary/1

class Node{
    char c;
    vector<Node*> adj;
    int inc;
    
public:
    Node(char x):c(x), inc(0){};
    
    void addNeighbour(Node *v){
        adj.push_back(v);
    }
    void increment(){inc++;}
    void decrement(){inc--;}
    vector<Node*> getAdj(){return adj;}
    int getInc(){return inc;}
    char getC(){ return c;}
};

class Graph{
public:
    vector<Node*> nodes;
    Graph(int k){
        for(int i=0;i<k;i++){
            Node *n = new Node('a'+i);
            nodes.push_back(n);
        }
    }
    void buildGraph(string dict[], int N, int K);
    string topologicalSort(int k);
    ~Graph(){
        for(Node* n : nodes){
            delete n;
        }
    }
};

void Graph::buildGraph(string dict[], int N, int K){
    for(int i=0;i<N-1;i++){
        string curr = dict[i];
        string next = dict[i+1];
        int j=0;
        while(j<curr.size() and j<next.size() and curr[j]==next[j]){
            j++;
        }
        if(j==curr.size() or j==next.size()) continue;
        nodes[next[j]-'a']->increment();
        nodes[curr[j]-'a']->addNeighbour(nodes[next[j]-'a']);
    }
}

string Graph::topologicalSort(int k){
    string ans="";
    queue<Node*> q;
    for(int i=0;i<k;i++){
        if(nodes[i]->getInc()==0) q.push(nodes[i]);
    }
    while(!q.empty()){
        Node *curr = q.front();
        q.pop();
        ans.push_back(curr->getC());
        for(Node *vis : curr->getAdj()){
            if(vis->getInc()>0){
                vis->decrement();
                if(vis->getInc()==0) q.push(vis);
            } 
        }
    }
    return ans;
}

string printOrder(string dict[], int N, int k){
   Graph g(k); 
   g.buildGraph(dict,N,k);
   return g.topologicalSort(k);
}