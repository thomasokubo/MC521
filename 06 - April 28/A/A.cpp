#include <bits/stdc++.h>
using namespace std;

vector< vector<int> > matriz;

int main(){

	int i, j, aux;
	int k, n,t,p;

	matriz.resize(71);
	matriz[0].assign(71, 0);
	matriz[1].assign(71, 1);
	for(i=2;i<=70;i++){
		matriz[i].push_back(1);
		for(j=1;j<=70;j++)
			matriz[i].push_back(matriz[i][j-1] + matriz[i-1][j]);
	}




	cin >> k;
	for(i=0;i<k;i++){
		cin >> n>> t>> p;
		cout<<matriz[n][t-n*p] << endl;
	}

	return 0;
}