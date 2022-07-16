#include<stdio.h>
#include<cstdlib>

int M1 = 1<<15; 
int M2 = 1<<4;

void f(int n,int i,int m,int p){
	if((n&m)==m){
		if(p){
			printf("+");
		}
		if(i>2){
			printf("2(");
			f(i,4,M2,0);
			printf(")");
		} else if (i == 2) {
			printf("2(2)");
		} else if (i == 1) {
			printf("2");
		} else {
			printf("2(0)");		 	
		} p = 1;
	}
	if(i>0){
		f(n<<1,i-1,m,p);
	}	
}


int main(){
	int n;
	scanf("%d",&n);
	f(n,15,M1,0);
return 0;
}
