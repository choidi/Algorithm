#include<stdio.h>
#include<string.h>

#define maxN 10010
int key[maxN];

int main()
{
	int t,n;
	scanf("%d",&t);
	while(t--){
		scanf("%d",&n);
		for(int i=1;i<=n;i++)
			scanf("%d",&key[i]);
		int sum=0;
		for(int i=1;i<=n;i++)
			if(key[i]!=i){
				int m=i,c=0;
				do{
					int temp=key[m];
					key[m]=m;
					m=temp;
					c++;
				}while(m!=i);
				sum+=c-1;
			}
		printf("%d\n",sum);
	}
	return 0;
}

