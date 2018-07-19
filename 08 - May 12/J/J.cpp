#include <bits/stdc++.h>
using namespace std;

priority_queue<int> atacantes;
priority_queue<int> defensores;

int main() {

	int i,j,k,aux,flag;
	int ataque, defesa, primeiro, segundo;		

	cin >> ataque >> defesa;
	while(ataque || defesa) {
		for(i=0;i<ataque;i++) {
			cin >> aux;
			atacantes.push((-1)*aux);
		}
		for(i=0;i<defesa;i++){
			cin >> aux;
			defensores.push((-1)*aux);
		}

		if(defesa>1)
			defensores.pop();
	
		segundo = (-1)*defensores.top();
	
		flag=0;
		while((-1)*atacantes.top() < segundo && !flag)
			flag++;
		
		
		if(!flag) cout << "N" << endl;
		else cout << "Y" << endl;
	
		
		while(!atacantes.empty()) atacantes.pop();
		while(!defensores.empty()) defensores.pop();

		cin >> ataque >> defesa;
	}
    return 0;
}