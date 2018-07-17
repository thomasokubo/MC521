#include <bits/stdc++.h>
using namespace std;


vector<int> res;
vector<int> notas;

int main(){

	int i, j, k,aux;
	int n, soma;

	while(cin >> n){
		soma = 0;
		for(i=0;i<n;i++){
			cin >> aux;
			soma+= aux;
			notas.push_back(aux);
		}

		if(soma%n == 0) {
			aux = soma/n;
			soma = 0;
			for(i=0;i<n;i++)
				soma += abs(aux-notas[i]);


			soma = soma/2;
			soma++;
			res.push_back(soma);
		} else {

			res.push_back(-1);

		}

		notas.clear();

	}

	for(i=0;i<res.size();i++){
		cout << res[i] <<endl;
	}
	
	return 0;
}