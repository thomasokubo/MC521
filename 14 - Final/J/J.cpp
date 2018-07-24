#include <bits/stdc++.h>
using namespace std;

vector<int> juan;
vector<int> ric;
int main(){

	int i,j,k,aux;
	int n,m;
	
	while(cin >> n >> m){

		for(i=0;i<n;i++){
			cin >> aux;
			juan.push_back(aux);
		}
		
		for(i=0;i<m;i++){
			cin >> aux;
			ric.push_back(aux);
		}
	
		j=0;
		for(i=0;i<n;i++){
			if(juan[i]==ric[j])
				j++;
		}
		
		if(j==m) cout <<"sim" << endl;
		else cout << "nao" << endl;

		juan.clear();
		ric.clear();


	}

	return 0;
}