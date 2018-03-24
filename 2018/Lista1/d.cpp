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

int n;

int main(){
	while(cin >> n){
		if(n%2==0){
			int l=0, r=n-1;
			while(l<n and r>=0){
				for(int i=0; i<n; i++){
					//db(i _ l _ r);
					if(i!=l and i!=r) cout << 3;
					else if(i==l) cout << 1;
					else cout << 2;
					//db(l _ r);
				}
				r--;
				l++;
				cout << endl;
			}
		}
		else{
			int l=0, r=n-1;
			while(l<n and r>=0){
				for(int i=0; i<n; i++){
					//db(i _ l _ r);
					if(l==n/2 and r==n/2){
						break;
					}
					else if(i!=l and i!=r) cout << 3;
					else if(i==l) cout << 1;
					else cout << 2;
					//db(l _ r);
				}
				if(l==n/2 and r==n/2){
					for(int j=0;j<n/2;j++) cout << 3;
					cout << 2;
					for(int j=n/2+1;j<n;j++) cout << 3;

				}
				r--;
				l++;
				cout << endl;
			}
		}
	}
}