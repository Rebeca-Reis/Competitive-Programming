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

ll n,k,t[305],resp,aux;
multiset <int> s;

int main(){
	cin >> n >> k;
	for(int i=0;i<n;i++) cin >> t[i];
	for(int i=0;i<k;i++) s.insert(t[i]);
	aux=*s.begin();
	resp+=aux;
	s.erase(s.begin());
	if(k<n){
		for(int i=k;i<n;i++){
			s.insert(t[i]);
			aux+= *s.begin();
			resp+=aux;
			s.erase(s.begin());
		}
	}
	while(!s.empty()){
		aux+= *s.begin();
		resp+=aux;
		s.erase(s.begin());
	}
	cout << resp<< endl;
	// for(auto it= s.begin(); it!=s.end(); it++) cout << *it <<  " ";
	// 		cout << endl;
	//para printar o set
 }