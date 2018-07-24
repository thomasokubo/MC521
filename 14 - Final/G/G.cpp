#include <bits/stdc++.h> 
using namespace std;

priority_queue<int> piece;
int main(){

	int i,j,k,aux;
	long long int n,a, soma;

	cin >> n >> a;
	while(n && a){
		soma = 0;
		for(i=0;i<n;i++) {
			cin >> aux;
			soma += aux;
			piece.push(aux);
		}
		piece.push(0);		

		if(soma == a){
			cout << ":D" << endl;
		} else if(soma<a){
			cout << "-.-" << endl;
		} else {
			
			bool found = false;
			double corte = (double)a;
			aux = piece.top();
			piece.pop();
			k=1;
			while(!found){
				while(piece.top() == aux && !piece.empty()){
					k++;
					piece.pop();
				}
				if(k*(aux-piece.top()) > corte) {
					cout << fixed;
					cout << setprecision(4) << (double)((double)aux - (double)(corte/(double)k)) << endl;
					found = true;
				} else {
					corte -= (double)(k*(aux-piece.top()));
					aux = piece.top();
					piece.pop();
					k++;
				}

			}
		}

		while(!piece.empty()){
			piece.pop();
		}

		cin >> n >> a;
	}

	return 0;
}