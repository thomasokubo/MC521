#include <bits/stdc++.h>
using namespace std;

vector<long long int> res;
vector<int> pieces;

int main() {

	long long int n, aux;
	
	cin >> n;
	while(n>=0){	
		aux = n*(n+1);
		aux = aux/2;
		aux++;
		res.push_back(aux);
		cin >> n;
	}

	for(int i=0;i<res.size();i++) cout << res[i] << endl;


    return 0;
}