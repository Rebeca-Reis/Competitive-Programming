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

int t,a,s1,s2,u;

int main(){
	cin.tie(0);
//	ios_base::sync_with_stdio(0);
	cin >>t;
	while(t--){
		priority_queue< int, vector<int>, greater<int> > m1; //n maiores
		priority_queue<int> m2; //n/2 menores
		while(cin >> a){
			if(a==0) break;
			s1=m1.size();
			s2=m2.size();
			if((s1-s2) > 1){
				u=m1.top();
				m1.pop();
				m2.push(u);
			}
			if((s2-s1) > 1){
				u=m2.top();
				m2.pop();
				m1.push(u);
			}
			if(a!=-1){
				if(m2.empty()) m2.push(a);
				else if(!m2.empty() and a<= m2.top()) m2.push(a);
				else if(!m1.empty() and a>m1.top()) m1.push(a);
				else m2.push(a);
			}
			else if(a==-1){
				if(s1== 1+ s2){ 
					cout << m1.top() << '\n';
					m1.pop();
				}
				else if(s2 == s1 + 1){
					cout << m2.top() << endl;
					m2.pop();
				}
				else{
					int resp=min(m1.top(),m2.top());
					if(resp==m1.top()) m1.pop();
					else m2.pop();
					cout << resp << '\n';
				}
			}
		}
	}
}
