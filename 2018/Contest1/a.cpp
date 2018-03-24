#include <bits/stdc++.h>

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

string a,b,s;
int t,even[15],up[15],down[15],cont;

int main(){
	cin >> t;
	while(t--){
		cont=0;
		for(int i=0;i<3;i++){
			cin >> a >> b >> s;
			if(s=="even"){
				for(int j=0;j<a.size();j++) even[a[j]-'A']++, even[b[j]-'A']++;
			}
			else if(s=="up"){
				for(int j=0;j<a.size();j++) up[b[j]-'A']++, down[a[j]-'A']++;
				cont++;
			//	for(int i=0;i<11;i++){
		//			if(a.find('A'+i)== -1 and b.find('A'+i)== -1) even[i]++;
			//	}

			}
			else if(s=="down"){
				for(int j=0;j<a.size();j++) up[a[j]-'A']++, down[b[j]-'A']++;
				cont++;
		//		for(int i=0;i<11;i++){
			//		if(a.find('A'+i)== -1 and b.find('A'+i)== -1) even[i]++;
				//}

			}		
		}
		for(int i=0;i<13;i++){
			if(!even[i]){
				if(up[i]==cont) cout << (char)('A'+i) << " is the counterfeit coin and it is light." << endl;
				else if(down[i]==cont) cout << (char)('A'+i) << " is the counterfeit coin and it is heavy." << endl;
			}
		}
		memset(even,0,sizeof(even));
		memset(up,0,sizeof(up));
		memset(down,0,sizeof(down));
	}
}

