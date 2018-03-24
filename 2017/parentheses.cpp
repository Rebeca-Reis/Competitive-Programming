#include <bits/stdc++.h>
#include <string.h>
using namespace std;

//https://uva.onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=614

int t,n,c1,d1,r,a[130];
string s;

int main(){
	scanf("%d",&t);
	getline(cin, s);
	while(t--){
		c1=0,d1=0,r=0;
		getline(cin, s);
		n=s.size();
		if(n==0){
			printf("Yes\n");
		}
		//printf("%s\n", s);
		for(int i=0;i<n;i++){
			if(s[i]=='(') c1++, a[i]=1;
			else if(s[i]==')') c1--,a[i]=-1;
			else if(s[i]=='[') d1++,a[i]=2;
			else if(s[i]==']') d1--,a[i]=-2;
		}
		if(c1!=0 || d1!=0){
		//	printf("%d %d\n", c1, d1);
			printf("No\n");
			r=1;}
		//for(int i=0;i<n;++i) cout << a[i] << ' ';
		if(!r){
			for(int i=0;i<n-2;i++){
				if(a[i]==1 && a[i+2]==-1){
					if(a[i+1]==-2 || a[i+1]==2){
						printf("No\n");
						r=1;
						break;
					}
				}
				else if(a[i]==2 && a[i+2]==-2){
					if(a[i+1]==-1 || a[i+1]==1){
						printf("No\n");
						r=1;
						break;
					}
				}
			}
		}
		if(!r) printf("Yes\n");
		s.clear();
	}
}
