#include<iostream>

using namespace std;
int main(){
	int k,n=0;
	double total=0;
	cin >> k;
	while(total<=k){
		n++;
		total += 1.0/n;
	}
	cout << n;

return 0;
}
