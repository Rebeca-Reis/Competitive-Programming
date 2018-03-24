#include <bits/stdc++.h>
using namespace std;

float x,y;

int main(){
	cin >> x >> y;
	float t=x*y/(y-x);
	int ans=ceil(t/x);
	cout << ans << endl;
}