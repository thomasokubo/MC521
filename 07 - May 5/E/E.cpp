#include <bits/stdc++.h>
using namespace std;

vector< vector<int> > matriz;

int main() {

	int i,j,aux, l, c, d, flag;
	int n,k;	

	cin >> n >> k;

	if(k>pow(n,2)) {
		cout << -1 << endl;
	}else{ 
		matriz.resize(n);
		for(i=0;i<n;i++) matriz[i].assign(n,0);

		l=0;
		c=0;
		
		flag = 0;
		for(j=0;j<n;j++){
			for(i=j;i<n;i++){
				if(i!=j && k>=2){
					matriz[i][j] = 1;
					matriz[j][i] = 1;
					k -= 2;
				} else if(i==j && k>0){
					matriz[i][j] =1;
					k--;
				}
			}
		}

		for(i=0;i<n;i++){
			cout << matriz[i][0];
			for(j=1;j<n;j++){
				cout << " " << matriz[i][j];
			}
			cout << endl;
		}

	}
    
    return 0;
}