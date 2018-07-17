#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <queue>
#include <iomanip>

using namespace std;

vector<int> res;

int main() {

	int i,j, aux, counter;
	int n;
	vector<int> inicio;
	vector<int> fim;

	while (cin >> n){
		counter = 0;
		inicio.assign(n+1,0);
		fim.assign(n+1, 0);

		for(i=1;i<=n;i++){
			cin >> aux;
			inicio[aux] = i;
		}
		for(i=1;i<=n;i++){
			cin >> aux;
			fim[aux] = i;
		}

		for(i=1;i<=n;i++) {
			for(j=i+1;j<=n;j++){
				if((fim[i] < fim[j])&&(inicio[i]>inicio[j])) {
					counter++;
				} else if ((fim[i]>fim[j])&&(inicio[i]<inicio[j])) {
					counter++;
				}
		
			}
		}
		res.push_back(counter);
		inicio.clear();
		fim.clear();
	
	}
	for(i=0;i<res.size();i++){
		cout << res[i] << endl;

	}

    return 0;
}