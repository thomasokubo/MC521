#include <bits/stdc++.h>
using namespace std;

int main(){

	int i,j,k,aux;
	int n;
	int mary, john;

	cin >>n;
	while(n){
		mary = 0;
		for(i=0;i<n;i++){
			cin >> aux;
			if(aux%2 == 0)
				mary++;
		}

		john = 0;
		for(i=0;i<n;i++){
			cin >> aux;
			if(aux%2 != 0)
				john++;
		}
		
		aux = mary-john;
		cout << abs(aux) << endl;

		cin >>n;

    }

	return 0;
}