#include <bits/stdc++.h>
using namespace std;

vector<int> path;

int main(){

	int i,j,k,aux;
	int n;

	path.assign(2, 1);
	for(i=2;i<=40;i++)
		path.push_back(path[i-1]+path[i-2]);
	
	cin >> n;
	while(n){
		cout << path[n] << endl;
		cin >> n;
	}



	return 0;
}