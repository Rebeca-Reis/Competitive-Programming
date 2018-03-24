#include <bits/stdc++.h>
using namespace std;

const int N = 0x63636363;

int n,a[100005],minimo=N,soma;

int main(){
	scanf("%d",&n);
	for(int i=0;i<n;i++) scanf("%d",a+i);
	sort(a,a+n);
	for(int i=0;i<n/2;i++){
		soma=a[i]+a[n-i-1];
		if(minimo>soma) minimo=soma;
	}
	printf("%d\n",minimo);
}