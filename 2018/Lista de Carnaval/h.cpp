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

const long double EPS = 1e-5;
const int N=1e5+5;
const int MOD=1e9+7;
const int INF=0x3f3f3f3f;

double n,a,h[N],maxi,area_maxi,ok,b;
double ans,area;

int main(){
	while(cin >> n >> a){
		if(n==0 and a==0) return 0;
		ans=0;
		maxi=0;
		ok=0;
		b=0;
		area_maxi=0;
		for(int i=0;i<n;i++){
			cin >> h[i];
			maxi=max(maxi,h[i]);
			area_maxi+=h[i];
		}
		if(area_maxi<a){
			cout << "-.-" << endl;
			ok=1;
		}
		while(abs(area-a) > EPS){
			if(ok) {break;}
			area=0;
			for(int i=0;i<n;i++) (h[i]-ans > 0) ? area += h[i]-ans : area=area;
			if(area>a) b=ans, ans=(b+maxi)/2;
			else if(area<a) maxi=ans, ans=(b+maxi)/2;
			if(area==a) {break;}
		}
		if(ans==0 and !ok) cout << ":D" << endl;
		else if(!ok) printf("%.4f\n",ans);
		memset(h,0,sizeof(h));
	}
}