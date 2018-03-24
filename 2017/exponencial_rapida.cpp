#include <bits/stdc++.h>
using namespace std;

#define mod 10e9+7;
long long n,p,a[100];

long long pot(long long n, long long x){
	if(x==0) return 1;
	else if(x%2==0)  return pot (n*n,x/2);
	else return n*pot(n*n,x/2);

}

