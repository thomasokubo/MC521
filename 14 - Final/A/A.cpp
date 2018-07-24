#include <bits/stdc++.h>
using namespace std;

int main(){

	int i,j,k,aux;
	int n;
	long long int soma;

	cin >> n;
	cin >> k;
	soma=0;
	for(i=1;i<n;i++){
		cin >> aux;
		if(aux-k<=10){
			soma+=(aux-k);
		} else {
			soma += 10;
		}
		k=aux;
	}

	soma += 10;
	cout << soma << endl;

	return 0;
}