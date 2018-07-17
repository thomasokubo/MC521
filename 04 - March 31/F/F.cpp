#include <bits/stdc++.h>
using namespace std;

vector<int> res;
vector<int> jack;
vector<int> jill;

int main(){

	int i,j,k,aux, count;
	int n, m;

	cin>> n >>m;
	while(n||m){

		for(i=0;i<n;i++){
			cin>>aux;
			jack.push_back(aux);

		}
	
		for(i=0;i<m;i++){
			cin>>aux;
			jill.push_back(aux);

		}
		i=0;
		j=0;
		count = 0;
		while(i<n&&j<m){
			if(jack[i] < jill[j]){
				i++;
			} else if(jack[i] > jill[j]) {
				j++;
			} else if(jack[i] == jill[j]){
				i++;
				j++;		
				count++;
			}
		}

		res.push_back(count);
		jack.clear();
		jill.clear();
		cin >> n >> m;

	}

	for(i=0;i<res.size();i++){
		cout << res[i] << endl;
	}

	return 0;

}