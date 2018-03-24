#include <bits/stdc++.h>
using namespace std;

int a,b,resp;

int main(){
	cin >> a >> b;
	if(a>b) swap(a,b);
	if(a==b) resp=a;
	else resp=b;
	cout << resp << endl;
}