#include <bits/stdc++.h>
using namespace std;
//https://www.codepit.io/#/problems/58e804ff69194b0033572ffd/view?index=11
 string s1,s2;

 int main(){
 	cin >> s1;
 	int n=s1.size();
 	s2=s1;
 //	for(int i=0;i<n;i++) s2[i]=s1[n-i-1]; 
 	reverse(s2.begin(),s2.end());
 	for(int i=0;i<n/2;i++){
 		if(s1[i]!=s2[i]) s2[i]=s1[i];
 	}
 	cout << s2 << endl;
 }
