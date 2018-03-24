#include <bits/stdc++.h>
using namespace std;
//https://www.urionlinejudge.com.br/judge/pt/problems/view/1718

int c,n,v[100005],prefix[100005],cont,cont2,x;

int main(){
	cin >> c >> n;
	for(int i=0;i<n;i++){
		cin >> x;
		v[x]=1;
	}
	int slice=c/n;
	prefix[0]=v[0];
	for(int i=1;i<c;i++) prefix[i]=prefix[i-1]+v[i];
	bool resp= false;
	for(int i=0;i<=slice;i++){
		if(resp==true and cont2==n){break;} 
		cont=0,cont2=0;
		for(int j=i;cont<slice;j+=slice){
			if(j<c and j+slice<c){
				if((prefix[j+slice]-prefix[j])==1) resp=true,cont2++;
				else resp=false;
			}
			else if(j<c and j+slice>=c){
				if((prefix[j+slice-c]+prefix[c-1]-prefix[j])==1) resp=true,cont2++;
				else resp=false;
			}
			cont++;
		}
	}
	if(resp==true and cont2==n) cout << "S" << endl;
	else cout << "N" << endl;	
}