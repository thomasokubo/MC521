#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <queue>
#include <stack>
#include <set>
#include <map>
#include <ctime>

using namespace std;

vector<int> max2;
vector<int> min2;

int main() {

	int i, j ,k, aux, curr, next;
	int t,n, p, maior=0, menor=0;

	cin >> t;

	for(i=0;i<t;i++){
		cin >> n;

		if(n>0) cin >> curr;
		for(j=1;j<n;j++){
			cin >> next;
			if(next > curr) maior++;
			else if(next< curr) menor++;


			curr = next;
		}	
		max2.push_back(maior);
		min2.push_back(menor);
		maior = 0;
		menor = 0;
	}

	for(i=0;i<t;i++)
		cout << "Case " << i+1 << ": "<< max2[i] << " " << min2[i] << endl;
    return 0;
}