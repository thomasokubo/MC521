#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <queue>
#include <ctime>
#include <iomanip>
#include <set>
using namespace std;


int buscaBinaria(int key, int maximo, int minimo);

vector<int> res;
vector<int> pontos;
int soma;

int main() {

	int i, j, aux, lado, count;
	int n;

	while(cin >> n){

		pontos.push_back(0);	// Guarda distancias relativas a um determinado ponto
	
		// Le as distancias entre os n pontos
		for(i=0;i<n;i++){
			cin >> aux;
			pontos.push_back(pontos[i]+aux);
		}

		// Caso a soma total nao seja multipla de 3, nao tem como formar triangulos equilateros
		soma = pontos[n];
		count = 0;
		/*if(soma%3) {
			//res.push_back(0);

		} else*/ if(!(soma%3)) { 

		
			lado = soma/3;	// lado do triangulo
			i=0;			// indice das distancias, por onde comecar
			//count = 0;		// conta o numero de triangulos achados
			while(lado > pontos[i]) { 
				aux=0;
				// Procura os tres lados do triangulo
				for(j=1;(j<=3)&&(!aux);j++){
					aux = buscaBinaria((pontos[i]+j*lado)%soma, n, 0);	// 1 se nao encotrar e 0 se encontrar
				}

				if(!aux) count++;	

				i++;	
			}

		}	
		res.push_back(count);
		pontos.clear();
	}
		
	for(i=0;i<res.size();i++) cout << res[i] << endl;

    return 0;
}


int buscaBinaria(int key, int maximo, int minimo){

	int media = (maximo+minimo)/2;
	int r;

	// Retorna 1 se nao achar key
	if(maximo < minimo){
		r = 1;
	} else if(pontos[media] == key){
	// Retorna 0 caso ache key
		r = 0;
	// Recursao na metade com numeros menores que key
	} else if(pontos[media] < key) {
		r = buscaBinaria(key, maximo, media+1);
	// Recursao na metade com numeros maiores que key
	} else {
		r = buscaBinaria(key, media-1, minimo);
	}

	return r;
}