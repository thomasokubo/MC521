#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <queue>
#include <stack>
#include <set>
#include <map>
#include <ctime>
#include <stdlib.h>

using namespace std;

priority_queue< pair<int, int> > pq;
vector<int> fila;

int main() {

	int p, n;
	int i, j,aux, count = 0;
	pair<int, int> res, temp;

	cin >> p;

	// iteracao dos cases
	for(i=0; i<p;i++) {
		
		cin >> n;
		// iteracao para cada predio
		for(j=0;j<n;j++){
			cin >> aux;
			pq.push(make_pair(abs(aux), aux));
		}
		
		if(n>0) {
			count++;
			res = pq.top();
			pq.pop();
		}
		for(j=1;j<n;j++){
			temp = pq.top();
			pq.pop();
			if((res.second < 0) &&(temp.second > 0 )) {
				count ++;
				res = temp;

			} else if(res.second > 0 && (temp.second < 0)){
				count++;
				res = temp;
			}
		}
		fila.push_back(count);
		count = 0;
	
	}


	for(i=0;i<p;i++) 
		cout << fila[i] << endl;

    return 0;
}