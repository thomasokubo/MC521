
#include <bits/stdc++.h> 
#define INF 10e5
using namespace std;

vector< vector< pair<int,int> > > grafo;
vector<int> dist;


int main(){

	int i,j,u ,k,aux;
	int v, e, t, a, b, cases;

	cin >> cases;
	for(k=0;k<cases;k++){

		cin >> v >> e;
		grafo.resize(v);
		dist.assign(v,INF);

		for(i=0;i<e;i++){
			cin >> a >> b >> t;
			grafo[a].push_back(make_pair(b,t));
		}

		/*Bellman-Ford*/
		dist[0] = 0; 	// inicializa o vértice por onde começa, neste case é o zero
		for(i=0;i<v-1;i++){
			for(u=0;u<v;u++){
				for(j=0;j<grafo[u].size();j++){
					pair<int,int> no = grafo[u][j];
					dist[no.first] = min(dist[no.first], dist[u]+no.second);

				}
			}
		}


		bool temCicloNegativo = false;
		for(i=0;i<v;i++){
			for(j=0;j<grafo[i].size();j++){
				pair<int,int> no = grafo[i][j];
				if(dist[no.first] > dist[i]+no.second)
					temCicloNegativo = true;
			}
		}

		if(temCicloNegativo) cout << "possible" << endl;
		else cout << "not possible" << endl;

		dist.clear();
		grafo.clear();


	}

	return 0;
}