#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <queue>
#include <stack>
#include <set>
#include <map>
#include <ctime>
#include <iomanip>
using namespace std;

int numWays(int ways);
vector<int> res;


int main() {

	int i, j, k, aux, a,b ,c;
	int t, s;

	cin >> t;
	for(k=0;k<t;k++){
		cin >> s;
		res.push_back(numWays(s));

	}

	for(i=0;i<res.size();i++){	
		if(res[i]>0) cout << res[i] << endl;
		else cout << "No solution" <<endl;
	}
    return 0;
}


int numWays(int ways){ 	// numero de representacao

	int i=1, key=1, achou = 0;

	while(!achou) {
		if(key+i+1 == ways) {
			achou = 1;
		} else if(key+i+1 > ways) {
			achou = 2;
		} else {
			key = key+i+1;
			i++;
		}
	}

	if(achou == 1) return i;
	else return -1;

}
/*
	int a, b, c, key=1, achou=0, count;

	while(!achou) {
		count = 0;
		for(a=0;a<=key;a++){
			for(b=0;b<=key;b++) {
				for(c=0;c<=key;c++){
					if(a+b+c == key) {
						count++;
	
					}
				}
			}
		}


		if(count == ways) {
			achou = 1;
		} else if(count > ways) {	
			achou = 2; 
		} else {
			key++;
		}

	}

	if(achou == 1) {
		return key;	
	} else {
		return -1;
	}

}*/