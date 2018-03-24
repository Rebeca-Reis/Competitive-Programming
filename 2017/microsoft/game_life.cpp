#include <bits/stdc++.h>
using namespace std;
#include <string.h>

char m1[30][30],c,m2[30][30];
int h,w,t,cont,cmas,cfem;
string s;
vector<string> v;

int main(){
	scanf("%d%d%d",&h,&w,&t);
	for(int i=1;i<=h;i++){
/*		for(int j=1;j<=w;j++){
			scanf("%c",&m1[i][j]);
		}*/
		cin >> s;
		v.push_back(s);
	}
	while(t--){
		for(int i=0;i<h;i++){
			for(int j=0;j<w;j++){
				v[i][j]=v[i][j];
				cont,cmas,cfem=0;
				if(v[i][j]== '#' or m1[i][j]=='*')
				{
					  if(m1[i-1][j]!=m1[i][j] and m1[i-1][j]!='.') cont++;
					  if(m1[i+1][j]!=m1[i][j] and m1[i+1][j]!='.') cont++;
					  if(m1[i][j-1]!=m1[i][j] and m1[i][j-1]!='.') cont++;
					  if(m1[i][j+1]!=m1[i][j] and m1[i][j+1]!='.') cont++;
					  if(cont<2 or cont>3) m2[i][j] = '.';
				}
				else if(m1[i][j]=='.')
				{
					if(m1[i-1][j]=='#') cmas++;
					if(m1[i-1][j]=='*') cfem++;
					if(m1[i+1][j]=='#') cmas++;
					if(m1[i+1][j]=='*') cfem++;
					if(m1[i][j-1]=='#') cmas++;
					if(m1[i][j-1]=='*') cfem++;
					if(m1[i][j+1]=='#') cmas++;
					if(m1[i][j+1]=='*') cfem++;
					if(cmas + cfem== 3){
						if(cmas==1) m2[i][j]='#';
						else if(cfem==1) m2[i][j]='*';
					}
				}
			}
		}
		for(int i=0;i<=h;i++){
			for(int j=0;j<=w;j++){
				m1[i][j] = m2[i][j];
			}
		}
	}
	for(int i=1;i<=h;i++){
		for(int j=1;j<=w;j++){
			printf("%c",m1[i][j]);
		}
		printf("\n");
	}
}