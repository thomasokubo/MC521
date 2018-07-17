#include <bits/stdc++.h>
using namespace std;

vector<int> res;

int main() {

	int i, j, k, aux;
	int n, c, v, count, par;

	cin >> n;
	while(n){
		count = 0;
		par = 0;
		for(i=0;i<n;i++){
			cin >> c >> v;
			count += v/4;
			if(v%4>=2) par++;
			if(par == 2) {
				par = 0;
				count++;
			}
		
		}

		res.push_back(count);

		cin >> n;
	}
	
	for(i=0;i<res.size();i++){
		cout << res[i] << endl;
	}

    return 0;
}