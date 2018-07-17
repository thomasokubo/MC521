#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <queue>
#include <ctime>
#include <iomanip>
using namespace std;

vector<int> res;
vector<int> senha;
vector<int> usado;
vector<int> contador;

int main() {

	int i, j, aux, cases=0;
	int k, n;

	// Enquanto nao terminar com EOF
	while(cin >> k >> n){
		cases++; 				// Incrementa um case
		contador.push_back(n);  // Tamanho da permutacao original
		usado.assign(n+1, 0);	// Zera o vetor que indica se um numero da permutacao ja apareceu

		// Le o codigo
		for(i=0;i<k;i++){
			cin >> aux;	
			senha.push_back(aux);
		}
		
		for(i=0;i<k;i++){
			if(usado[senha[i]] == 0) {
				usado[senha[i]]++;
				res.push_back(senha[i]);	
	
			}
		}
		usado.clear();
		senha.clear();
	}

	aux = 0;
	for(i=0; i<cases;i++){
		cout << res[aux];
		aux++;
		for(j=1;j<contador[i];j++) {
			cout << " " << res[aux];
			aux++;
		}
		cout << endl;
	}

    return 0;
}
