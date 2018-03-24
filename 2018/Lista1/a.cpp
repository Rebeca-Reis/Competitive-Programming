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

double x,y;

int main(){
	cin >> x >> y;
	if(x>0 and y>0) cout << "Q1" << endl;
	else if(x>0 and y<0) cout << "Q4" << endl;
	else if(x<0 and y>0) cout << "Q2" << endl;
	else if(x<0 and y<0) cout << "Q3" << endl;
	else if(x==0 and y) cout << "Eixo Y" << endl;
	else if(x and y==0) cout << "Eixo X" << endl;
	else if(x==0 and y==0) cout << "Origem" << endl;
}