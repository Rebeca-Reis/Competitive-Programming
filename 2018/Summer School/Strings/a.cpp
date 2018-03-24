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
const int N=2e5+5;
const int MOD=1e9+7;
const int INF=0x3f3f3f3f;

int n, z[N],p[N];

int main(){
	cin >> n;
	//int pos= -5;
	for(int i=0;i<n;i++) cin >> z[i];
	for(int i=0;i<n;i++){
		//if(i<pos) i=pos;
		if(z[i]>1){
			for(int j=0;j<z[i];j++){
				p[i+j]=max(1+j,p[i+j]);
				//pos=i+j;
			}
		}
		else p[i]=max(p[i],z[i]);
	}
	for(int i=0;i<n;i++) cout << p[i] << " ";
	cout << '\n';
}
