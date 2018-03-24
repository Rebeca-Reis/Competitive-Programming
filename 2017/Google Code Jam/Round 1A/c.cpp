#include <bits/stdc++.h>
using namespace std;

float a[55][55],c[55][55],ma,mi;
int b[55];
int n,p,t,v,cont;

int main()
{
	scanf("%d",&t);
	int caso=1;
	while(t--)
	{
		cin >> n >> p;
		cont =0;
		for(int i=0;i<n;i++) scanf("%d",&b[i]);
		for(int i=0;i<n;i++){
			for(int j=0;j<p;j++){
				scanf("%f",&a[i][j]);
			}
		}
		for(int i=0;i<n;i++) sort(a[i],a[i]+p);
		for(int i=0;i<n;i++){
			for(int j=0;j<p;j++){
				a[i][j] /= b[i];
			}
		}
		for(int i=0;i<n;i++){
			for(int j=0;j<p;j++){
				c[i][j]=a[j][i];
			}
		}
		for(int i=0;i<p;i++){
			mi=10000005;
			ma=0;
			for(int j=0;j<n;j++){
				ma=max(ma,c[i][j]);
				mi=min(mi,c[i][j]);
			}
			if(ma<=(mi*11/9)) cont ++;
		}
		printf("Case #%d: %d\n",caso,cont);
		caso++;
	}
}