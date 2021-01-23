#include<stdio.h>
int main(){
	int n,x;
	scanf("%d%d",&n,&x);
	int sum=0;
	for(int i=0;i<n;i++){
		int v,p;
		scanf("%d%d",&v,&p);
		sum+=v*p;
		if(sum>x*100){
			printf("%d\n",i+1);
			return 0;
		}
	}
	puts("-1");
}