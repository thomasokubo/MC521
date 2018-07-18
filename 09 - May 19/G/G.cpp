#include <bits/stdc++.h>
using namespace std;

vector<int> tamCopo;
priority_queue< pair<int,int> > ordemTam;
vector<int> volumeCha;
int main() {

	int i,j,k,aux;
	int n,w, volume;
	cin >> n >> w;
	volumeCha.assign(n, 0);
	volume = 0;
	for(i=0;i<n;i++){
		cin >> aux;
		if(aux%2==0) {
			volume+=aux/2;
			volumeCha[i] = aux/2;
		} else {
			volume += (aux+1)/2;
			volumeCha[i] = (aux+1)/2;
 		}
		tamCopo.push_back(aux);	
		ordemTam.push(make_pair(aux, i));
	}

	if(w < volume){
		cout << -1 << endl;
	}else{
		w -= volume;
		while(w>0){
			pair<int,int> copo = ordemTam.top();
			ordemTam.pop();
			
			if(w <= tamCopo[copo.second]/2){
				volumeCha[copo.second] += w;
				w=0;
			} else {
				volumeCha[copo.second] = tamCopo[copo.second];
				w -= tamCopo[copo.second]/2;
			}
		}	
			
		for(i=0;i<volumeCha.size();i++) cout << volumeCha[i] << " ";
		cout << endl;
	}

	return 0;
}