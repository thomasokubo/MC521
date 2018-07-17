#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <queue>
#include <iomanip>
using namespace std;


class UnionFind{	
	private:
		vector<int> rank;
		vector<int> p;
		vector<int> setSize;
		int numSets;

	public:

		UnionFind(int n){
			rank.assign(n, 0);
			setSize.assign(n, 1);
			numSets = n;
			p.assign(n, 0);
			for(int i=0;i<n;i++) p[i] = i;
		}

		
		int	findSet(int i){
			return (p[i] == i ) ? i : (p[i] = findSet(p[i])) ;
		}

		bool isSameSet(int i, int j){
			return findSet(i) == findSet(j);
		}

		void unionSet(int i, int j){
			int x, y;			
	
			if(!isSameSet(i,j)){
				numSets--;
				x = findSet(i);
				y = findSet(j);
				if(rank[x] > rank[y]) {
					p[y] = x;
					setSize[x]+= setSize[y];
				} else {
					p[x] = y;
					setSize[y] += setSize[x];
					if(rank[x] == rank[y]) rank[y]++;
				}
			}
		}

		int numDisjointSets(){
			return numSets;
		}

		int sizeOfSet(int i){
			return setSize[findSet(i)];
		}


		void clearSets(){
			rank.clear();
			p.clear();
			setSize.clear();
			numSets=0;

		}



};



vector<int> res;

int main() {
 	

	int i, j, aux=0, a=0, b;	
	int cases;
	char great;
	string line;

	cin >> cases;
	// Pega a linha em branco
	getline(cin, line);
	getline(cin, line);
	line.clear();

	for(i=0;i<cases;i++){
		// Pega a maior letra possivel
		getline(cin, line);
		// Transforma em inteiro
		aux = line[0]-'0';
		aux = aux - 0;
		aux = aux - 16;

		// Cria estrura UnionFind com aux elementos
		UnionFind  uf(aux);

		line.clear();
		getline(cin, line);
		while(!line.empty()){
			a = line[0] - '0';
			b = line[1] - '0';
			a = a - 17;
			b = b - 17;

			uf.unionSet(a,b);
			
			line.clear();
			getline(cin,line);

		}

		res.push_back(uf.numDisjointSets());		
		uf.clearSets();
	}


	for(i=0;i<res.size()-1;i++){
		cout << res[i] << endl;
		cout << endl;
	}
	cout << res[i] << endl;



    return 0;
}
	