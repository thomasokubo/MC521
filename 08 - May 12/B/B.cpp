#include <bits/stdc++.h>
using namespace std;

vector<int> fila;
priority_queue<int> notas;

int main() {

	int i,j,k, igual, aux;
	int n,num,p;

	cin >> n;

	for(i=0;i<n;i++){

		cin >> num;

		for(j=0;j<num;j++) {
			cin >> aux;
			fila.push_back(aux);
			notas.push(aux);
		}

		igual=0;
		for(k=0;k<fila.size();k++){
			if(fila[k] == notas.top())
				igual++;
			
			notas.pop();
		}
		
		cout << igual << endl;
		fila.clear();

	}

    return 0;
}