#include<cstdlib>
#include<stdio.h>

int high[11];

int main(){
	int n;
	for(int i=0;i<10;i++){
		scanf("%d",&high[i]);
	}
	scanf("%d",&n);
	n += 30;
	int temp=0;
	for(int i=0;i<10;i++){
		if(n >= high[i]) temp++;
	}
	printf("%d",temp);

return 0;
}
