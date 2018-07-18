#include <bits/stdc++.h>
using namespace std;

vector<int> horas;
int main() {
	
	int i,j,k;
	int n, weeks;
	long long int soma, aux;

	cin >> n >> k;
	weeks = n-k+1;
	for(i=0;i<n;i++){
		cin >> aux;
		horas.push_back(aux);
	}

	soma = 0;
	for(i=0;i<k;i++)
		soma += horas[i];
	
	aux = soma;
	for(i=k;i<n;i++){
		aux = aux-horas[i-k] + horas[i];
		soma+=aux;
	}

	cout << fixed;
	cout << setprecision(6) << (double)soma/(double)weeks<< endl;

	return 0;
}