#include <bits/stdc++.h>
using namespace std;

int main(){

	int i,j,k,n;
	long long int p,aux;

	cin >> n;
	while(n) {
		p=0;
		for(i=0;i<n;i++){
			cin >> aux;
			p = p ^= aux;
		}

		if(p) 
            cout << "Yes" << endl;
		else 
            cout << "No" << endl;
		cin>>n;
	}

	return 0;
}