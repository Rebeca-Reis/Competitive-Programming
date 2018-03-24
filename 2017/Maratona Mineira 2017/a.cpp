#include <bits/stdc++.h>
using namespace std;

int d,p,x,f;

int main(){
	cin >> d >> p >> x >> f;
	if(f%2==0) cout << p << endl;
	else if((d+f)%2==0) cout << p+x << endl;
	else cout <<  p-x << endl;
	
}