#include<cstdlib>
#include<stdio.h>

int main(){
	int k,n;
	double total=0;
	scanf("%d",&k);
	for(n=1;;n++){
		total = total+(1.0/(double)n);
		if(total>k) break;
	}
	printf("%d",n);


return 0;
}
