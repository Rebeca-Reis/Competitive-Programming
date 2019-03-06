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

int t,caso;
double a;
const long double r2=1.414213;

int main(){
	cin >> t;
	while(t--){
		caso++;
		cin >>a;
		double cosa=a/r2;
		double sena=sqrt(1-cosa*cosa);
		double sen45=r2/2;
		double cos45=sen45;
		double cosb=cos45*cosa+sen45*sena;
		double senb=sen45*cosa-sena*cos45;
		cout << "Case #" << caso << ":\n";
		cout << "0 0 0.5\n";
		printf("%.6f %.6f 0\n",0.5*cosb,0.5*senb);
		printf("%.6f %.6f 0\n",-0.5*senb,0.5*cosb);
	}
}


