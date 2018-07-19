#include <bits/stdc++.h>
using namespace std;

vector<int> vet;
priority_queue< pair<int,int> > fila;
int main(){

	int i,j,k;
	unsigned long long aux;
	int n,f,a,b;

	cin >> n >>f;
	for(i=0;i<n;i++){
		cin >> a >> b;
		vet.push_back(min(a,b));
		fila.push(make_pair(min(2*a,b) - a,i));
	}

	for(i=0;i<f;i++){
		pair<int,int> par;
		par = fila.top();
		fila.pop();
		vet[par.second] = max(par.first,0) + vet[par.second];
	}

	aux=0;
	for(i=0;i<vet.size();i++) {
		aux += vet[i];
	}

	cout << aux << endl;
	return 0;
}