#include <bits/stdc++.h>
using namespace std;

vector<long long int> portas;
int main(){

	int j,k,aux;
	long long int i;
	long long int n;

	for(i=1;i<25000001;i++){
		int root = sqrt(i);
		if(root*root == i)
			portas.push_back(i);

	}

	cin >> n;
	while(n){
		
		cout << portas[0];
		for(i=1;portas[i]<n;i++){
			cout << " " << portas[i];
		}
		int root = sqrt(n);
		if(root*root == n && n>1) cout << " " << n;

		cout << endl;
		cin >> n;
	}

	return 0;
}