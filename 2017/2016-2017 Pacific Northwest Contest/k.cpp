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

int u[6],v[6];
float contf,contp;

int main(){
	contp=36;
	for(int i=0;i<6;i++) cin >> u[i];
	for(int i=0;i<6;i++) cin >> v[i];
	for(int i=0;i<6;i++){
		for(int j=0;j<6;j++){
			if(u[i]>v[j]) contf++;
			else if(u[i]==v[j]) contp--;
		}
	}
	float resp=contf/contp;
	printf("%.5f\n",resp);
}