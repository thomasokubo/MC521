#include <bits/stdc++.h>
using namespace std;

vector< vector<int> > pares;
vector<int> musicos;
vector<int> res;

int main() {
	
	int i,j,k,aux, maior=-1;
	int n,m, x,y,z,p,q,r;

	cin >> n >> m;
	
	pares.resize(n+1);	
	for(i=0;i<=n;i++)
		pares[i].assign(n+1, 0);
	
	for(i=0;i<m;i++){
		cin >> p >> q >> r;
		pares[p][q] = r;
		pares[q][p] = r;
	}

	for(i=1;i<n-1;i++){
		for(j=i+1;j<n;j++){
			for(k=j+1;k<=n;k++) {
				if(pares[i][j]+pares[i][k]+pares[j][k] > maior){
					x=i;
					y=j;
					z=k;
					maior = pares[i][j]+pares[i][k]+pares[j][k];
				}		
			}
		}
	}
	
	cout << x << " " << y << " " << z << endl;

	return 0;
}
