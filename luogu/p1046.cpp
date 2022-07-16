#include<iostream>

using namespace std;

int main(){
	int n[11],high,number=0;
	for(int i=0;i<10;i++){
		cin >> n[i];
	}
	cin >> high;
	high += 30;
	for(int i=0;i<10;i++){
		if(n[i]<=high) number++;
	}
	cout << number;


return 0;
}
