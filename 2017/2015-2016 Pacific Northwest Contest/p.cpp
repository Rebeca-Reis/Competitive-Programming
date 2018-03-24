#include <bits/stdc++.h>
#include <string.h>
using namespace std;
//http://codeforces.com/gym/100819/attachments/download/3913/20152016-acmicpc-pacific-northwest-regional-contest-div-2-en.pdf

char a[105];
int b[150],cont,resp,minimo=500,j;

int main(){
	gets(a);
	if(strlen(a)==0){
		printf("0\n");
		return 0;
	}
	for(int i=0;i<strlen(a);i++){
		if(b[a[i]]==0) cont++;
		b[a[i]]++;
	}
	if(cont<=2){
		printf("%d\n",0);
		return 0;
	}
	else{
		while(cont>2){
			minimo=500;
			for(int i='a';i<='a'+26;i++){
				if(minimo>b[i] and b[i]>=1) minimo = b[i] , j=i;
			}
			resp+=minimo;
			cont--;
			b[j]=0;
		}
	}
	printf("%d\n",resp);
}