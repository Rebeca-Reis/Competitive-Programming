#include <bits/stdc++.h>
using namespace std;

char c;
int v[1005],t,k,resp,cont,u;

int main(){
	int caso=1;
	cin >> t;
	while(t--){
		int i=0,pare=0,resp=0,impossivel=0;
		c=getchar();
		c=getchar();
		while(c!=32){
			c=='+'?	 v[i]=1 : v[i]=0;
			i++;
			c=getchar();
		}
		cin >> k;
		while(pare==0){
			cont=0, u=0;
			for(int j=u;j<i;j++){
				if(v[j]==0) cont++;
				else{
					if(cont==0 and j==i-1){
						pare=1;
						cont=0;                //chegou ao ultimo e todos sao 1
						break;
					}
					else if(cont!=0 and cont<=k)     //encontra menos '-' do q k, precisa virar
					{
						if(j-cont+k-1 >= i){
							pare=1;               //nao tem como virar mais, k > ultimos
							impossivel=1;
							cont =0;
							break;
						}
						else{
						 	for(int l=j-cont; l< j-cont+k ;l++) v[l] = 1- v[l];  //vira as panquecas
							resp++;
							u=j-cont;
							cont =0;
							break;
						}
					}
					else if(cont!=0 and cont >k){  //encontra um múltiplo de k para a quantidade de '-'
						int m=cont/k;
						for(int l=j-cont; l< j-cont+m*k ;l++) v[l] = 1- v[l];  //vira as panquecas
							resp+=m;
							u=j-cont;
							cont =0;
							break;
					}
				}
			}
			if(cont!=0){
				if(cont<k){
					pare=1;         //as ultimas são '-'
					impossivel=1;
				}
				else{
					int m=cont/k;
					resp+=m;
					if(cont%k) impossivel=1, pare=1;
					pare=1;
				}
			}
		}	
		if(impossivel) printf("Case #%d: IMPOSSIBLE\n",caso);
		else printf("Case #%d: %d\n",caso,resp);
		caso++;
	} 
}
