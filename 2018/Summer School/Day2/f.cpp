#include <bits/stdc++.h>
//
using namespace std;

#define mp make_pair
#define pb push_back
#define db(x) cerr << #x << " == " << x << endl;
#define _ << " " <<

typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> ii;

const long double EPS = 1e-9;
const int N=1e5+5;
const int MOD=1e9+7;
const int INF=0x3f3f3f3f;

stack<char> p,q;
string s;

int main(){
	cin >> s;
	int n=s.size();
	p.push(s[0]);
	int i=1;
	for(i=1;i<n;i++){
		if(!p.empty()){
			if(s[i]==')' and p.top()=='(') {p.pop(); db(i);}
			else if(s[i]==']' and p.top()=='[') {p.pop(); db(i);}
			else if(s[i]=='}' and p.top()=='{') {p.pop(); db(i);}
			else if(s[i]==')' and p.top()!='(') return cout << "NIE" << endl, 0;
			else if(s[i]==']' and p.top()!='[') return cout << "NIE" << endl, 0;
			else if(s[i]=='}' and p.top()!='{') return cout << "NIE" << endl, 0;
			else if(s[i]=='(' or s[i]=='[' or s[i]=='{') p.push(s[i]);
		}
		else p.push(s[i]);
	}
	if(p.empty()) return cout << s << endl, 0;
	else if(!p.empty()){ 
		for(int j=0;j<p.size();j++) {
			if(!p.empty()){
				if(p.top()=='(') p.pop(), s+=')';
				if(p.top()=='[') p.pop(), s+=']';
				if(p.top()=='{') p.pop(), s+='}';
			}
		}
	}
	i=s.size()-1;
	q.push(s[i]);
	for(i=s.size()-2;i>=0;i--){
		if(!q.empty()){
			if(s[i]=='(' and q.top()==')') {q.pop(); db(i);}
			else if(s[i]=='[' and q.top()==']') {q.pop(); db(i);}
			else if(s[i]=='{' and q.top()=='}') {q.pop(); db(i);}
			else if(s[i]=='(' and q.top()!=')') return cout << "NIE" << endl, 0;
			else if(s[i]=='[' and q.top()!=']') return cout << "NIE" << endl, 0;
			else if(s[i]=='{' and q.top()!='}') return cout << "NIE" << endl, 0;
			else if(s[i]==')' or s[i]==']' or s[i]=='}') q.push(s[i]);
		}
		else q.push(s[i]);
	}
	string r=s;
	reverse(r.begin(),r.end());
	if(q.empty()) return cout << s << endl, 0;
	else if(!q.empty()){ 
		for(int j=0;j<q.size();j++) {
			if(!q.empty()){
				if(q.top()==')') q.pop(), r+='(';
				if(q.top()==']') q.pop(), r+='[';
				if(q.top()=='}') q.pop(), r+='{';
			}
		}
	}
	if(q.empty()) reverse(r.begin(),r.end());
	cout << r << endl;
} 