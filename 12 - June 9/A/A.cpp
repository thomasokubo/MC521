#include <bits/stdc++.h>
using namespace std;

int main(){

	int k,n,w;
	long long int aux;
	cin >> k >>n >>w;
	aux = (k+w*k);
	aux = aux*w;
	aux = aux/2;
	aux -= n;

	if(aux>0)	cout << aux << endl;
	else cout << 0 << endl;

  return 0;
}
