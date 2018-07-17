#include<bits/stdc++.h>
using namespace std;

vector<int> data;

int main(){


	int i,j,k,aux,picos;
	int n;

	cin >> n;
	while(n){
		for(i=0;i<n;i++){
			cin >> aux;
			data.push_back(aux);

		}
		picos=0;
		for(i=1;i<n-1;i++){
			if((data[i-1]<data[i] && data[i+1]<data[i]) || (data[i-1]>data[i] && data[i+1]>data[i])) picos++;

		}
		if((data[n-1]<data[0] && data[1]<data[0]) || (data[n-1]>data[0] && data[1]>data[0])) picos++;
		if((data[n-2]>data[n-1] && data[0]>data[n-1]) || (data[n-2]<data[n-1] && data[0]<data[n-1])) picos++;
		cout << picos << endl; 
		data.clear();

		cin >> n;
	}








	return 0;
}