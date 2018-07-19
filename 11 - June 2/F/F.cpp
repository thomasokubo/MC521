#include <bits/stdc++.h>

using namespace std;

int main(){

	int i,j,aux;
	int x, y;

	cin >> x >> y;
	aux = y-x;
	i=1;
	while(aux*i < y) i++;

	cout << i << endl;
    
  return 0;
}