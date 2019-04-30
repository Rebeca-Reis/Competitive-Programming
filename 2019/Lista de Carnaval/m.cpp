#include <bits/stdc++.h>
//
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

vector<ll> answer;
ll r,l,sum;

void backtracking(ll current, int tam){
	if(tam ==11) return;
	if(current!=0) answer.pb(current);
	backtracking(current*10+4,tam+1);
	backtracking(current*10+7,tam+1);
}

int main(){
	cin.tie(0), ios_base::sync_with_stdio(0);
	backtracking(0,0);
	sort(answer.begin(),answer.end());
	// db(answer.size());
	for(int i=0;i<20;i++) cout << answer[i] << endl;
	cin >> l >> r;
	ll li,lf;
	int low=lower_bound(answer.begin(),answer.end(),l) - answer.begin();
	li=answer[low]; 
	lf=li;
	sum+=(min(li,r)-l+1)*li;
	while(true){
		if(lf+1>r) break;
		low++;
		lf=answer[low];
		sum+=(min(lf,r)-li)*lf;
		li=lf;
	}
	cout << sum << endl;
	//for(int i=0;i<answer.size();i++) cout << answer[i] << endl;
}