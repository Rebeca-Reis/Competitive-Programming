//https://www.interviewbit.com/problems/shortest-unique-prefix/
#include <bits/stdc++.h>
using namespace std;

class TrieNode{
public:
    bool isFinal;
    vector<TrieNode*> next;
    int qtd;
    TrieNode(){
        qtd=0;
        next.assign(26,nullptr);
        isFinal=false;
    }
};

class Trie{
public:
    TrieNode* root;
    Trie(){
        root = new TrieNode();
    } 
    ~Trie();
    void insertWord(string &s);
    string findPrefix(string &s); 
    
private:
    void remove(TrieNode* root);
};

void Trie::insertWord(string &s){
    TrieNode* aux = root;
    for(char c : s){
        if(aux->next[c-'a']!=nullptr) aux= aux->next[c-'a'];
        else{
            TrieNode* inserted = new TrieNode();
            aux->next[c-'a'] = inserted;
            aux->qtd ++;
            aux= aux->next[c-'a'];
        }
    }
    aux->isFinal= true;
}

string Trie::findPrefix(string &s){
    TrieNode* n = root;
    string ans="";
    string aux="";
    for(char c : s){
        if(n->qtd>1){ //fork in this node
            n=n->next[c-'a'];
            aux.push_back(c);    
            if(n->qtd<=1) ans= aux;
        }
        else{
            n=n->next[c-'a'];
            aux.push_back(c); 
        }
    }
    if(ans==""){ //a fork didn't happen
        ans.push_back(s[0]);
        return ans;
    }
    return ans;
}

vector<string> Solution::prefix(vector<string> &A) {
    vector<string> ans;
    Trie trie;
    for(string word : A){
        trie.insertWord(word);
    }
    for(string word : A){
        ans.push_back(trie.findPrefix(word));
    }
    return ans;
}

void Trie::remove(TrieNode* n){
    if(n==nullptr) return;
    for(TrieNode* aux : n->next){
        remove(aux);
    }
    delete n;
}

Trie::~Trie(){
    remove(root);
}
