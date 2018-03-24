#include <bits/stdc++.h>
using namespace std;

int a[100005];

int main(){
	int n,max=0,aux,i=0;
	char c;
	while(~scanf("%d%c",&a[0],&c))
	{
		i=1;
		max=0;
		while(c!='\n'){
			scanf("%d%c",a+i,&c);
			i++;}
		aux= *a;  //aux=a[0];
		if(max<aux) max=aux;
		if(aux<0) aux=0;
		for(int j=1;j<i;j++){
			if(a[j]<0)
			{
				if(max<aux) max=aux;
				aux+=a[j];																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																													
				if(aux<0) aux=0;
			}
			else aux+=a[j];
		}
		if(max<aux) max=aux;
		printf("%d\n",max);
	}
	return 0;
}