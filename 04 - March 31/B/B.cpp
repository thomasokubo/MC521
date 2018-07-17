#include <bits/stdc++.h>
using namespace std;

vector<int> res;
vector<int> morning;
vector<int> noon;

int main(){

	int i, j, k, aux, soma;
	int n, d,r;


	cin >> n>> d>> r;

	while(n&&d&&r){

		for(i=0;i<n;i++){
			cin >> aux;
			morning.push_back(aux);
		}


		for(j=0;j<n;j++){
			cin >> aux;
			noon.push_back((-1)*aux);
		}

		sort(morning.begin(), morning.end());
		sort(noon.begin(), noon.end());

		soma = 0;
		for(i=0;i<n;i++) {

			aux = morning[i]-noon[i];

			if(aux > d)
				soma += r*(aux-d);
		}

		res.push_back(soma);
		morning.clear();
		noon.clear();
	
		cin >> n>> d>> r;
	}

	for(i=0;i<res.size();i++) {
		cout << res[i] << endl;
	}

	return 0;
}