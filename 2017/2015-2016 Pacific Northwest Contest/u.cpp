#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll w,h,b,a;
vector< vector<ll> > v1;
vector<ll> v3;
set<ll> x;

int main(){
	cin >> w >> h >> b;
	for(int i=0;i<h;i++)
	{
		vector<ll> linha;
		for(int j=0;j<w;j++)
		{
			cin >> a;
			linha.push_back(a);
		}
		v1.push_back(linha);
	}
	while(b--)
	{
		vector<vector<ll> > v2;
	 	for(int i=0;i<h;i++){
	 		vector<ll> linha;
			for(int j=0;j<w;j++){
				a = (v1[(i-1+h)%h][(j-1+w)%w] + v1[(i-1+h)%h][(j+w)%w] + v1[(i-1+h)%h][(j+1+w)%w] + v1[(i+h)%h][(j-1+w)%w] + v1[(i+h)%h][(j+w)%w] + v1[(i+h)%h][(j+1+w)%w] + v1[(i+1+h)%h][(j-1+w)%w] + v1[(i+1+h)%h][(j+w)%w] + v1[(i+1+h)%h][(j+1+w)%w]);
				linha.push_back(a);
			}
			v2.push_back(linha);
	 	}
	 	v1=v2;
 	}
 	for(int i=0;i<h;i++) 
 	{
 		for(int j=0;j<w;j++) 
 		{
 			x.insert(v1[i][j]);
 		}
	}
	cout << x.size() << endl;
}