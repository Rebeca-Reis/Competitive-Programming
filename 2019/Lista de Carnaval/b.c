#include <stdio.h>

int n,mid,t,ans;

int square_root(int l, int r, int n){
	mid=(l+r)/2;
	// db(l _ mid _ r);
	if(mid*mid==n) return mid;
	if(l==r) return l;
	if(mid*mid<n) return square_root(mid+1,r,n);
	return square_root(l,mid,n);
}

int main(){
	scanf("%d",&t);
	int i;
	for(i=0;i<t;i++){
		scanf("%d",&n);
		ans= square_root(1,n,n);
		if(ans*ans > n) ans--;
		printf("%d\n",ans);
	}
}