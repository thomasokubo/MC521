#include <bits/stdc++.h>
using namespace std;

#define MAXN 100100
#define left(i) ((i<<1)+1)
#define right(i) ((i<<1) + 2)

void maisDin(int root,int l, int r, int x, int val);
vector<int> res;
vector<int>apostas;
vector<int> gamble;
int soma;

int main() {

	int i,j,k,aux;
	int n, sum, maior=0;

 	cin >> n;
	while(n){

		sum=0;
		maior=0;
		for(i=0;i<n;i++) {
			cin >> aux;
			sum+=aux;
			if(sum>maior) maior = sum;
			if(sum<0) sum = 0;
		}
		res.push_back(maior);
		cin >> n;
	}

	for(i=0;i<res.size();i++){
		if(res[i]>0) cout << "The maximum winning streak is " << res[i] << "." <<endl;
		else cout << "Losing streak." << endl;
	}

	return 0;
}