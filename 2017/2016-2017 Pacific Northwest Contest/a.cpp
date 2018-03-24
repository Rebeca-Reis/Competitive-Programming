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

string u;
int lis[50],maxi=0;

int main(){
	cin >> u;
	int n= u.size();
	for(int i=0;i<n;i++){
		for(int j=0;j<i;j++){
			if(u[j]<u[i] and lis[i]<1+lis[j])  lis[i] = 1+lis[j];
		}
		if(!lis[i]) lis[i]++;
	}
	for(int i=0;i<n;i++) if(maxi<lis[i]) maxi=lis[i];
	cout << 26 - maxi << endl;
}