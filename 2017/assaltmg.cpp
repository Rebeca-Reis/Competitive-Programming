#include <bits/stdc++.h>
using namespace std;

int t;
long long k[20];

int main(){
	cin >> t;
	while(t--){
		int m,d,c,x;
		cin >> m >> d;
		for(int i=0;i<20;i++){
			cin >> c;
			for(int j=0;j<c;j++) cin >> x, k[i] += (1<<x); //k[i] é a bitmask das chaves do diretor i
		}
		for(int i=0;i<20;i++){
			
		}

	}
}