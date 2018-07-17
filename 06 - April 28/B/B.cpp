#include <bits/stdc++.h>
using namespace std;

vector< vector<int> > palitos;
vector<int> all;

int main(){

	int i,j,k,aux,total, maximo;
	int p,n,c;

	cin >> p>> n>>c;
	while(p||n||c) {

		all.assign(n+1, 0);
		palitos.resize(n);
		for(i=0;i<n;i++)
			palitos[i].assign(p, 0);

		for(i=0;i<n;i++){
			for(j=0;j<p;j++){
				cin >> palitos[i][j];
			}
		}

		total = 0;
		for(j=0;j<p;j++){
			aux=0;
			for(i=0;i<n;i++){
				if(palitos[i][j]>0){
					aux++;
				} else {
					all[aux]++;
					aux=0;
				}
			}
			all[aux]++;

		}

		for(i=c;i<=n;i++){
			total += all[i];
		}
		all.clear();
		cout << total << endl;
		


		cin >>p >>n >>c ;
	}



	return 0;

}