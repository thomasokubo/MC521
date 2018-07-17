#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <queue>
#include <stack>
#include <set>
#include <map>
#include <ctime>

using namespace std;

int dobraD(int n);

vector<int> fila;

int main() {
	
	int n, aux;

	cin >> n;
	while(n!=-1){
		aux = dobraD(n);
		fila.push_back(aux);
		cin >> n;
	}

	for(aux=0;aux<fila.size();aux++){
		cout << "Teste " << aux+1  << endl;
		cout << fila[aux] << endl;
		cout << endl;
	}
    return 0;
}


int dobraD(int n){

	int k=2,i;
	for(i=0;i<n;i++) k=(2*k)-1;

	return k*k;
}