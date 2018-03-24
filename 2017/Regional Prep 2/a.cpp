#include <bits/stdc++.h>
using namespace std;
//https://www.codepit.io/#/problems/58e804ff69194b0033572ff2/view?index=0

int n,k;

int main(){
	cin >> n >> k;
	if(n == 1 and k == 1) return cout << 0 << endl, 0;
	if (n == k) return cout << -1 << endl, 0;
	if (k == 1) return cout << n-1 << endl, 0;
	cout << n/k + (n%k > 1) << endl;
}

