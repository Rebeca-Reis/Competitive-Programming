#include <bits/stdc++.h>
//http://codeforces.com/problemset/problem/1101/E
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

ll n,x,y;
string s;
ll mini,maxi;

int main(){
	cin.tie(0), ios_base::sync_with_stdio(0);
	cin >> n;
	for(int i=0;i<n;i++){
		cin >> s >> x >> y;
		if(s=="+"){
			if(x>=y){
				maxi=max(maxi,x);
				mini=max(mini,y);
			}  
			else{
				maxi=max(maxi,y);
				mini=max(mini,x);
			}
		}
		else{
			if(x<y) swap(x,y); //x é sempre maior ou igual
			if(x>=maxi and y>=mini) cout << "YES" << endl;
			else cout << "NO" << endl;
			
		}
	}
}