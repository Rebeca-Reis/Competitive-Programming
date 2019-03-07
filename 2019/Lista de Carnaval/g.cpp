#include <bits/stdc++.h>
//http://codeforces.com/problemset/problem/739/A
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

ll n, q, r, l, mex;

int main(){
	cin >> n >> q;
	mex=1e5+5;
	for(int i=0;i<q;i++){
		cin >> l >> r;
		mex=min(mex,r-l+1);
	}
	cout << mex << endl;
	for(int i=0;i<n;i++){
		cout << i%mex << " ";
	}
	cout << endl;
}

//o intervalo de menor tamanho é o limitante. ex tamanho 2: 0 1. o mex maior possivel eh 2 nele. nao adianta querer 
//aumentar o mex em outros intervalos pois o minimo sempre vai ser este do intervalo limitante. daí, basta repetir 
//a sequencia obtida nesse intervalo em todo o restante do vetor, pois qualquer intervalo q vc pegue vai dar o mesmo mex

