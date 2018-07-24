#include <bits/stdc++.h>
using namespace std;

vector<int> a;
vector<int> b;
int main(){
	
	int i,j,k,aux;
	int n, t;

	cin >>n;
	cin >> t;
	for(i=0;i<t;i++){
		cin >>aux;
		a.push_back(aux);
	}
	cin >>t;
	for(i=0;i<t;i++){
		cin >>aux;
		b.push_back(aux);
	}

	k=0;
	for(i=0;i<10000 && a.size() != 0 && b.size() != 0;i++){
		if(a[0] > b[0]){
			a.push_back(b[0]);
			a.push_back(a[0]);
			a.erase(a.begin());
			b.erase(b.begin());
		} else {
			b.push_back(a[0]);
			b.push_back(b[0]);
			b.erase(b.begin());
			a.erase(a.begin());
		}
	}

	if(a.size()==0)
		cout<< i << " " <<  2 << endl;
	else if(b.size()==0) 
        cout << i<< " "<< 1<<endl;
	else cout << -1 <<endl;

	return 0;
}