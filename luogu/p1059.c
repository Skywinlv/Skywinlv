#include<cstdio>

int N[1001];

int main(){
	int n,x,m=0;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&x);
		N[x]=1;
	}
	for(int j=1;j<=1000;j++){
		if(N[j]){m++;}
	}
	printf("%d\n",m);
	for(int i=1;i<=1000;i++){
		if(N[i]){
			printf("%d ",i);
		}
	}


return 0;
}
