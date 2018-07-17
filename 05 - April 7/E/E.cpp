#include <bits/stdc++.h>
using namespace std;

vector<char> res;

int main() {

	int i,j,k,aux;
	int d, vf,vg;
	float tf, tg;

	while(cin >> d >> vf >> vg) {
		tf = 12/(float)vf;
		tg = (float)sqrt(pow(d,2)+ 144)/(float)vg;


		if(tf < tg){ 
			res.push_back('N');
		} else {
			res.push_back('S');
		}
	}

	for(i=0;i<res.size();i++) cout << res[i] << endl;

    return 0;
}