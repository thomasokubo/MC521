#include <bits/stdc++.h>
using namespace std;

vector< vector<int> > palitosEmbaixo;
vector<int> numPalitosEncima;
vector<int> res;
int main () {
  
  
  int i,j,k,aux, count;
  int n, m,a,b;
  
  cin >> n >> m;
  while(n || m ) {
    
    palitosEmbaixo.resize(n+1);
    numPalitosEncima.assign(n+1, 0);
    for(i=0;i<m;i++) {
      cin >> a>> b;
      palitosEmbaixo[a].push_back(b);
      numPalitosEncima[b]++;
    }
    
    aux=0;
    count = 0;
    while(!aux){
     aux=1;
     for(i=1;i<=n;i++) {
       if(numPalitosEncima[i]==0){
	 res.push_back(i);
	 aux=0;
	 count++;
	 numPalitosEncima[i]=-1;
	 for(j=0;j<palitosEmbaixo[i].size();j++)
	   numPalitosEncima[palitosEmbaixo[i][j]]--;
	 
       }
      }
    }
    
    if(count<n) cout << "IMPOSSIBLE" << endl;
    else 
     for(i=0;i<res.size();i++) cout<< res[i] << endl;
    
    palitosEmbaixo.clear();
    numPalitosEncima.clear();
    res.clear();
    cin >> n >>m;
    
  }
  return 0;
}