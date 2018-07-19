#include <bits/stdc++.h>
using namespace std;

int main(){

	int i,j,k,aux,gol,count;
	int n ,m;
	
	cin >> n >> m;
	count =0;
	for(i=0;i<n;i++){
		gol=0;
		for(j=0;j<m;j++){
			cin >> aux;
			if(aux) gol++;
		}
		if(gol==m) count++;
	}

	cout << count << endl;
  return 0;
}