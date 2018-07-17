#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <queue>
#include <stack>
#include <set>
#include <map>
#include <ctime>
#include<bits/stdc++.h>
#include <iomanip>

using namespace std;

vector<double> res;

int main() {

	int cow, car, show;
	int total, up, down, i;
	double prob;

	while(	cin >> cow >> car >> show){
		total = cow+car;
		up = cow*car + car*(car-1);
		down = total*(total - show -1);

		prob = (double)up/(double)down;

		res.push_back(prob);

	}
	cout << fixed;
	for(i=0; i<res.size();i++) cout << setprecision(5) << res[i] << endl;

    return 0;
}