#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <queue>
#include <stack>
#include <set>
#include <map>
#include <ctime>
#include<bits/stdc++.h>
#include <iomanip>


using namespace std;

priority_queue<double> venda;
priority_queue<double> compra;
vector<double> saldo;

int main() {

	
	int i, j, achou;
	int n;
	char tipo=0;
	double ganho, valor, temp;

	// Le o numero de transacoes
	cin >> n;
	while(n){
		ganho=0.0;
		// Le as n transacoes
		for(i=0;i<n;i++){			
			// Cada transacao eh composta pelo tipo (compra ou venda) e seu respectivo valor
			cin >> tipo;
			cin >> valor;
			achou = 0;		// indica se realizou a transacao (achou=1) ou nao (achou = 0)
		
			// Transacao do tipo compra
			if(tipo == 'C'){
				// Verifica se ha vendas disponiveis
				if(venda.size() > 0){
					temp = venda.top();
					temp = (-1.0)*temp;
					// se o valor para comprar for maior que da menor venda, faz a compra
					if(valor >= temp){
						ganho+=(valor-temp);	// soma a diferenca no ganho 
						venda.pop();			// remove a venda da fila
						achou = 1;				// indica realizacao de transferencia
					}
				}

				// Se nao foi efetuada uma transacao, coloca o valor da compra na fila de compras
				if(!achou) compra.push(valor);
	
			// Transacao do tipo venda
			} else {
				// Verifica se ha compras disponiveis
				if(compra.size() > 0) {
					// se o valor de venda for menor que o da maior compra
					if(valor <= compra.top()){
						ganho +=(compra.top()-valor);
						compra.pop();
						achou = 1;
					}
				}

				// Se nao foi efetuada a transacao
				if(!achou) venda.push((-1.0)*valor);
			}
		}	

		saldo.push_back(ganho);
		while(!venda.empty()) venda.pop();
		while(!compra.empty()) compra.pop();
		cin >> n;
	}
	
	cout << fixed;
	for(i=0;i<saldo.size();i++) cout << setprecision(2) << saldo[i] << endl;
//printf("%.2lf\n", saldo[i]);


    return 0;
}
