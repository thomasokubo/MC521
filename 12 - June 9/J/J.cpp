#include <bits/stdc++.h>
using namespace std;

int main(){

	long long int i,j,k,aux,n,a,b;
	long  double res,temp;
	vector<long long int> x;
	vector<long long int> y;

	cin >> n;
	for(i=0;i<n;i++){
		cin >> a >> b;
		x.push_back(a);
		y.push_back(b);
	}

	res=4e16;
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			temp = sqrt(((x[i]-x[j])*(x[i]-x[j])) + ((y[i]-y[j])*(y[i]-y[j])) );
			if(temp < res) res = temp;
		}
	}
	cout <<fixed;
	if(res==4e16) cout << 0 << endl;
	else cout << setprecision(3)<< res << endl;


	return 0;
}