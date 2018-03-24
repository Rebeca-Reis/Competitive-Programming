#include <bits/stdc++.h>
using namespace std;
//https://www.urionlinejudge.com.br/judge/pt/problems/view/2242

#define pb push_back
string s,r,vog1,vog2;
set<int> vogais;
int resp;

int main(){
	cin >> s;
	vogais.insert('a'),vogais.insert('e'),vogais.insert('i'),vogais.insert('o'),vogais.insert('u');
	r=s;
	reverse(r.begin(),r.end());
	for(int i=0;i<s.size();i++) if(vogais.count(s[i])) vog1.pb(s[i]); //se a letra está no set (é vogal), vc coloca na outra string
	for(int i=0;i<r.size();i++) if(vogais.count(r[i])) vog2.pb(r[i]);
	if(vog1==vog2) cout << "S" << endl; 
	else cout << "N" << endl;
}