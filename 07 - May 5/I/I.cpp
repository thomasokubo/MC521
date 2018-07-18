#include <bits/stdc++.h>
using namespace std;

vector<int> dir;
vector<int> esq;

int main() {

	int i,j,k,total, aux;
	int n, tam;
	char pe;

	
	while(cin >> n){
		dir.assign(31,0);
		esq.assign(31,0);
		for(i=0;i<n;i++){
			cin >> tam >> pe;
			if(pe == 'D')
				dir[tam-30]++;
			else 
				esq[tam-30]++;
		}

		total=0;
		for(i=0;i<=30;i++){
			aux = min(dir[i], esq[i]);
			total+=aux;
		}
		cout << total << endl;
		dir.clear();
		esq.clear();
	}

    return 0;
}