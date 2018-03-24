#include <bits/stdc++.h>
using namespace std;

long long x,y,l,c;

int main(){
	cin >> l >> c >> x >> y;
	int ans=1;
	if(c%2==0){
		if(y%2==0) cout << "Direita" << endl;
		else cout << "Esquerda" << endl;
	}
	else{
		if(x%2==0){
			if(y%2==0) cout << "Direita" << endl;
			else cout << "Esquerda" << endl;
		}
		else{
			if(y%2==0) cout << "Esquerda" << endl;
			else cout << "Direita" << endl;
		}
	}
}
