#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <queue>
#include <iomanip>
#include <math.h>

using namespace std;

vector<int> res;

int main() {

	int i;
	int x, y, m, n;

	cin >> x >> y >> m >> n;
	while (x||y||m||n) {
		
		if((x-m == 0)&&(y-n == 0)) {
			res.push_back(0);
		} else if(abs(x-m) == abs(y-n)) {
			res.push_back(1);
		} else if((x-m == 0)||(y-n == 0)){
			res.push_back(1);
		} else {
			res.push_back(2);
		}
		cin >> x >> y >> m >> n;
	}

	for(i=0;i<res.size();i++){
		cout << res[i] << endl;
	}

    return 0;
}