#include <bits/stdc++.h>
using namespace std;

string a,b;
int x,y,ans,n;
char c;

int main(){
	cin >> a >> c >> b;
	for(int i=0;i<a.size();i++) if(a[i]=='7') a[i]='0';
	for(int i=0;i<b.size();i++) if(b[i]=='7') b[i]='0';
	x=atoi(a.c_str());
	y=atoi(b.c_str());
	if(c=='+') ans=x+y;
	else ans=x*y;
	stringstream ss;
	ss << ans;
	string resp = ss.str();
	for(int i=0;i<resp.size();i++){
		if(resp[i]=='7') resp[i]='0';
	}
	for(int i=0;i<resp.size();i++){
		if(resp[i]=='0' and n==0) continue;
		else if(resp[i]!='0'){
			cout << resp[i];
			n++;
		}
		else if(resp[i]=='0' and n>0) cout << resp[i]; 
	}
	if(n==0) cout << 0;
	cout << endl;
}
