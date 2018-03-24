#include <bits/stdc++.h>
#include <string.h>
using namespace std;

//https://uva.onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=1346   LCS

char a[1005],b[1005];
int dp[1005][1005],len1,len2;
string s1,s2;

int lcs(){
	for(int i=1;i<=s1.size();i++){
		for(int j=1;j<=s2.size();j++){
			//if(i==0 || j==0) dp[i][j]=0;
			if(s1[i-1]==s2[j-1]) dp[i][j]= 1 + dp[i-1][j-1];
			else dp[i][j]= max(dp[i-1][j],dp[i][j-1]);
		}
	}
	return dp[s1.size()][s2.size()];
}

int main(){
	while(getline(cin,s1)){
		getline(cin,s2);
		printf("%d\n",lcs());
		memset(dp,0,sizeof(dp));
	}
}