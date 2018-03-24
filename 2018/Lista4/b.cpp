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

ll n1,d1,n2,d2,t,num,den,x;
char c;

ll gcd(ll a, ll b){
	return b ? gcd(b,a%b) : a;
}

int main(){
	cin >> t;
	while(t--){
		scanf("%lld / %lld %c %lld / %lld",&n1,&d1,&c,&n2,&d2);
		if(c=='+') num=n1*d2+n2*d1, den=d1*d2;
		else if(c=='-') num=n1*d2-n2*d1,den=d1*d2;
		else if(c=='*') num=n1*n2, den=d1*d2;
		else if(c=='/') num=n1*d2, den=n2*d1;
		cout << num << "/" << den << " = ";
		x=gcd(abs(num),den);
		num/=x;
		den/=x;
		cout << num << "/" << den << endl;
	}
}

