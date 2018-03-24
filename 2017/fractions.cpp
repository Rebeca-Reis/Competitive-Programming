#include <bits/stdc++.h>

int k,a[500],b[500];

int main(){
	while(~scanf("%d",&k)){
		int count=0;
		for(int i=k+1;i<=2*k;i++)
		{
			int m=(k*i)%(i-k);
			int l=(k*i)/(i-k);
			if(!m){
				a[count]=l;
				b[count]=i;
				count++;
			}
		}
		printf("%d\n",count);
		for(int j=0;j<count;j++)
		{
			printf("1/%d = 1/%d + 1/%d\n",k,a[j],b[j]);
		}
	}

}


//y=  kx/(x-k)