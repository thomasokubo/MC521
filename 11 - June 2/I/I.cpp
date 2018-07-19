#include <bits/stdc++.h>
using namespace std;

int main(){

	int i,aux,count;
	int p;

	cin >> p;
	count=1;
	aux=1;
	while(aux != 0){
		count++;
		aux = (2*aux+1)%(p+1);
	}
	cout << count <<endl;
	return 0;
}