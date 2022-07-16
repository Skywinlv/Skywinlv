#include<cstdio>

int main(){
	int a[10001]={0},l,m,b,e,c=0;
	scanf("%d %d",&l,&m);
	for(int i=0;i<m;i++){
		scanf("%d %d",&b,&e);
		for(int j=b;j<=e;j++){
			a[j]=1;
		}
	}
	for(int i=0;i<=l;i++){if(a[i]==0)c++;}
	printf("%d",c);
return 0;
}
