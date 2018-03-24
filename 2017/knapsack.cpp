#include <bits/stdc++.h>
using namespace std;

//http://www.spoj.com/problems/WACHOVIA/

int t,K,m,v[100],k[100],dp[55][1005]; // linhas sao as mochilas, e colunas sao os pesos maximos

int knapsack(int K,int m,int v[],int k[]){
	for(int i=0;i<=m;i++){
		for(int j=0;j<=K;j++){
			if(i==0||j==0) dp[i][j]=0;  //se o peso maximo for 0, a resposta é 0. se há zero mochilas, idem. 
			else if(k[i]>j) dp[i][j]=dp[i-1][j];  //peso da bolsa > peso maximo permitido. nao pode pegar, entao repete o valor de cima
			else dp[i][j]= max(dp[i-1][j-k[i]] + v[i], dp[i-1][j]); //peso da bolsa < peso maximo. pode pegar, resposta vai ser a ótima entre pegar e nao pegar
		}
	}
	return dp[m][K];
}

int main(){
	scanf("%d",&t);
	while(t--){
		scanf("%d%d",&K,&m);
		for(int i=1;i<=m;i++) scanf("%d%d",k+i,v+i);
		printf("Hey stupid robber, you can get %d.\n",knapsack(K,m,v,k));
		memset(dp,0,sizeof(dp));
	}
}