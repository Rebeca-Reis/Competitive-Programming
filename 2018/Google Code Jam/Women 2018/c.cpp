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

int caso,t,l,ans1,ans2,ans3;
string s1,s2,s3;
char a,b,c,d;

int main(){
	cin >> t;
	caso=0;
	while(t--){
		caso++;
		ans1=ans2=ans3=0;
		cin >> l;
		cin >> s1 >> s2 >> s3;
		int i=0;
		while(i<l){
			while(s1[i]==s2[i] and s1[i]==s3[i]) i++;
			a=s1[i];
			b=s2[i];
			c=s3[i];
			if(a!=b and a!=c and b!=c){
				cout << "Case #" << caso << ": " << "YES YES YES" << endl;
				break;
			}
			else if(a==b and a!=c){
				while(s1[i]==s2[i]) i++;
				if(s1[i]==c and s2[i]==s2[i-1]){
					cout << "Case #" << caso << ": " << "YES NO NO" << endl;
					break;
				}
				if(s2[i]==c and s1[i]==s1[i-1]){
					cout << "Case #" << caso << ": " << "NO YES NO" << endl;
					break;
				}
				else{
					cout << "Case #" << caso << ": " << "YES YES NO" << endl;
					break;
				}
			}
			else if(a==c and a!=b){
				while(s1[i]==s3[i]) i++;
				if(s1[i]==b and s3[i]==s3[i-1]){
					cout << "Case #" << caso << ": " << "YES NO NO" << endl;
					break;
				}
				if(s3[i]==b and s1[i]==s1[i-1]){
					cout << "Case #" << caso << ": " << "NO NO YES" << endl;
					break;
				}
				else{
					cout << "Case #" << caso << ": " << "YES NO YES" << endl;
					break;
				}
			}
			else{
				while(s2[i]==s3[i]) i++;
				if(s2[i]==a and s3[i]==s3[i-1]){
					cout << "Case #" << caso << ": " << "NO YES NO" << endl;
					break;
				}
				if(s3[i]==a and s2[i]==s2[i-1]){
					cout << "Case #" << caso << ": " << "NO NO YES" << endl;
					break;
				}
				else{
					cout << "Case #" << caso << ": " << "NO YES YES" << endl;
					break;
				}
			}
		}
	}
}







