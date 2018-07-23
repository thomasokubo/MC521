#include <bits/stdc++.h>
using namespace std;

vector<int> hitagi;
priority_queue<int> kaiki;

int main(){

	int i,j,aux;
	int n,k;

	cin >> n >> k;

	for(i=0;i<n;i++){
		cin >> aux;
		hitagi.push_back(aux);
	}

	for(i=0;i<k;i++){
		cin >> aux;
		kaiki.push(aux);
	}

	for(i=0;i<n;i++){
		if(hitagi[i]==0){
			hitagi[i]=kaiki.top();
			kaiki.pop();
		}
	}

	bool increase = true;
	aux = hitagi[0];
	for(i=1;i<n;i++){
		if(hitagi[i]<aux)  increase = false;
		aux = hitagi[i];
	}

	if(!increase) 
        cout << "YES" << endl;
	else 
        cout <<"NO"<< endl;

	hitagi.clear();

	return 0;
}