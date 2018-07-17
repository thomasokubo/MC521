#include<bits/stdc++.h>
using namespace std;


priority_queue<int> produtos;
vector<int> vetor;

int main(){

	int i,j,k, aux;
	int n;

	cin >> n;
	while (n) {

		for(i=0;i<n;i++) {
			cin >> aux;
			produtos.push(aux);
		}

		for(i=0;i<n/2;i++){
			vetor.push_back(produtos.top());
			produtos.pop();
		}

		aux=0;		
		for(i=0;i<n/2;i++){
			vetor[n/2-1-i] += produtos.top();
			produtos.pop();
			if(vetor[n/2-1-i] > aux) aux =vetor[n/2-1-i];
		}

		cout << aux << endl;
		vetor.clear();









		cin >> n;
	}










	return 0;
}