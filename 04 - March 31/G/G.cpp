#include <bits/stdc++.h>
using namespace std;

vector<char> cell;
vector<int> res;

int main(){

	char aux;
	int i,j, k, cases;
	int n,count;	

	cin >> cases;
	for(k=0;k<cases;k++) {
		cin >> n;
		for(i=0;i<n;i++){
			cin >> aux;
			cell.push_back(aux);

		}
		i =0;
		count = 0;
		while(i<n){
			if(cell[i] == '.') {
				i+=3;
				count++;
			} else {

				i++;

			}
		}
		res.push_back(count);
		cell.clear();
	}

	for(i=0;i<res.size();i++) cout << "Case " << i+1<< ": " << res[i] << endl;

	return 0;
}