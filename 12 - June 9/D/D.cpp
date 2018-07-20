#include <bits/stdc++.h>
using namespace std;

vector<int> badge;
vector<int> repetido;
int main(){

	int i,j,k,aux,flag;
	long long int n, sum;

	cin >> n;
	badge.assign(100100, 0);

	sum=0;
	for(i=0;i<n;i++) {
		cin >> aux;
		while(badge[aux]!=0) {
			sum++;
			aux++;
		}
		badge[aux]++;
	}

	cout << sum << endl;

	return 0;
}
