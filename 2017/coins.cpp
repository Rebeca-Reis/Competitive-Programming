#include <bits/stdc++.h>
using namespace std;

//https://uva.onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=503

int t,m,v[105],dp[105][50005],soma; // o valor=peso

int knapsack(int soma,int m,int v[]){
	for(int i=0;i<=m;i++){
		for(int j=0;j<=soma/2;j++){
			if(i==0||j==0) dp[i][j]=0;  //se a soma maxima for 0, a resposta é 0. se há zero moedas, idem. 
			else if(v[i]>j) dp[i][j]=dp[i-1][j];  //valor da moeda > valor maximo permitido (varia de 1 até soma/2). nao pode pegar, entao repete o valor de cima
			else dp[i][j]= max(dp[i-1][j-v[i]] + v[i], dp[i-1][j]); //peso da bolsa < peso maximo. pode pegar, resposta vai ser a ótima entre pegar e nao pegar
		}
	}
	return dp[m][soma/2];  //soma maxima que eu consigo menor ou igual à metade da soma total de moedas. 
}

int main(){
	scanf("%d",&t);
	while(t--){
		soma=0;
		scanf("%d",&m);
		for(int i=1;i<=m;i++){
			scanf("%d",v+i);
			soma+=v[i];
		}
		printf("%d\n",soma-2*knapsack(soma,m,v));   //a diferença entre as pessoas vai ser soma- 2*knapsack()
		memset(dp,0,sizeof(dp));
		memset(v,0,sizeof(v));
	}
}