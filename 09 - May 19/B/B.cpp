#include <bits/stdc++.h>
using namespace std;

int main() {

	int i,j;
	long long int n, aux, k;
	cin >> n;
			

	aux=1;
	if(n<10) {
		cout << 1 << endl;
 	} else if(n<100){
		k = n+10;
		k = k/10;			
		k=k*10;
		cout << k-n << endl;
	} else if(n<1000){
		k = n+100;
		k = k/100;			
		k=k*100;
		cout << k-n << endl;
	} else if(n<10000){
		k = n+1000;
		k = k/1000;			
		k=k*1000;
		cout << k-n << endl;
	} else if(n<100000){
		k = n+10000;
		k = k/10000;			
		k=k*10000;
		cout << k-n << endl;
	} else if(n<1000000){
		k = n+100000;
		k = k/100000;			
		k=k*100000;
		cout << k-n << endl;
	} else if(n<10000000){
		k = n+1000000;
		k = k/1000000;			
		k=k*1000000;
		cout << k-n << endl;

	} else if(n<100000000){
		k = n+10000000;
		k = k/10000000;			
		k=k*10000000;
		cout << k-n << endl;
	} else if(n<1000000000){
		k = n+100000000;
		k = k/100000000;			
		k=k*100000000;
		cout << k-n << endl;
	} else {
		k = n+1000000000;
		k = k/1000000000;			
		k=k*1000000000;
		cout << k-n << endl;
	}

    return 0;
}