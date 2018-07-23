#include <bits/stdc++.h>
using namespace std;


vector < pair<long long int, long long int> > sub;
int main(){

	int i,j;
	int n, m, aux, b,f;
	long long int soma;

	cin >> n;
	soma =0;
	for(i=0;i<n;i++){
		cin >> aux;
		soma += aux;
	}

	cin >> m;
	for(i=0;i<m;i++){
		cin >> b >> f;
		sub.push_back(make_pair(b,f));
	}

	long long int tempo = -1;
	bool found = false;
	for(i=0;i<m && !found;i++){
		if(soma>=sub[i].first && soma <= sub[i].second){
			tempo = soma;
			found = true;
		} else if(soma <= sub[i].first){
			tempo = sub[i].first;
			found = true;
		}
	}

	cout << tempo << endl;
	return 0;
}