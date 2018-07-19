#include <bits/stdc++.h>
using namespace std;


vector< vector<int> > grafo;
vector<bool> visitado;
vector<bool> ramo;
bool hasCycle;

void dfs(int u);

int main(){
  
    int i, j, k, aux;
    int t,n,m,a,b;
    cin >> t;
    for(k=0;k<t;k++){
      cin >> n >> m;
      grafo.resize(n+1);
      visitado.assign(n+1, false);
      ramo.assign(n+1,false);
      for(i=0;i<m;i++){
	cin >> a >> b;
	grafo[a].push_back(b);
      }
      
      hasCycle = false;
      for(i=1;i<=n;i++)
	dfs(i);
  
      if(hasCycle) cout << "SIM" << endl;
      else cout << "NAO" << endl;
      
      grafo.clear();
      visitado.clear();
      ramo.clear();
    }
    
  
    return 0;
}

void dfs(int u){
  
  if(!visitado[u]){
    visitado[u] = true;
    ramo[u] = true;
    for(int i=0;i<grafo[u].size();i++)
      dfs(grafo[u][i]); 
    
    ramo[u]=false;
      
   
  } else {
    if(ramo[u])
      hasCycle = true; 
  }
}

