#include <bits/stdc++.h>

using namespace std;

#define mp make_pair
#define pb push_back
#define db(x) cerr << #x << " == " << x << endl;
#define _ << " " <<
#define st first
#define nd second

typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> ii;

const long double EPS = 1e-9;
const int N=1e5+5;
const int MOD=1e9+7;
const int INF=0x3f3f3f3f;

int n,x,atual;
stack<int> p1,p2;

int main(){
	cin.tie(0), ios_base::sync_with_stdio(0);
	while(cin >> n){
		if(n==0) return 0;
		atual=1;
		while(!p1.empty()) p1.pop();
		while(!p2.empty()) p2.pop();
		for(int i=0;i<n;i++){
			cin >> x;
			if(x!=atual){
				while(!p1.empty()){
					if(p1.top()==atual){
						p2.push(p1.top());
						p1.pop();
						atual++;
					}
					else break;
				}
				if(x==atual){
					p2.push(x);
					atual++;
				}
				else p1.push(x);
			}
			else{
				p2.push(atual);
				atual++;
			}
		}
		while(!p1.empty()){
			if(p1.top()==atual) atual++, p2.push(p1.top()), p1.pop();
			else break;
		}
		if(p1.empty()) cout << "yes" << endl;
		else cout << "no" << endl;
	}
}

