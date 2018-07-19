#include <bits/stdc++.h>
using namespace std;

vector<double> agua;

int main() {
	
	int i,j,k;
	int n;
	double aux, soma, media, maior;

	while(cin >> n){
		maior = -1.0;
		for(i=0;i<n;i++){
			cin >> aux;
			agua.push_back(aux);
		}
		sort(agua.begin(), agua.end());
		media = agua[agua.size()/2];

		soma = 0.0;
		for(i=0;i<agua.size();i++)
			soma += abs(media-agua[i]);			
	
		cout << fixed;
		cout << setprecision(2) << soma << endl;
		agua.clear();
	}

    return 0;
}