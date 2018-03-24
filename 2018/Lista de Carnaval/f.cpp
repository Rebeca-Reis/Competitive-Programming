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

int n, v[50];

int main(){
	cin >> n;
	v[0]=0;
	v[1]=v[2]=1;
	for(int i=3;i<50;i++) v[i]=v[i-1]+v[i-2];
	for(int i=0;i<n-1;i++) cout << v[i] << " ";
	cout << v[n-1] << endl;;
}