#include <bits/stdc++.h>
using namespace std;

int n,resp,resto,i;
int  v[50]={1,1,2,6,24,120,720,5040,40320,362880};

int fatorial(int n){
	if(v[n]) return v[n];
	else return v[n]=n*fatorial(n-1);
}

int f(int &n,int &resp){
	int i;
	for(i=1;i<n;i++){
		if(v[i]>=n) {break;}
	}
	if(v[i]==n) resp++,n=0;
	else{
		i--;
		resp+=(n/v[i]);
		resto=n-v[i]*(n/v[i]);
		n=resto;
	}
}

int main(){
	cin >> n;
	v[0]=v[1]=1;
	resp=0;
	while(n!=0) f(n,resp);
	cout << resp << endl;
}