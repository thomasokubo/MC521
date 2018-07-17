#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <queue>
#include <iomanip>

using namespace std;


int main() {

	int i=2, j, flag=0;
	int n;	

	cin >> n;
	while((!flag)&&(i<n)){
		if(n%i == 0) flag =1;
		i++;
	}

	if(flag) cout << "nao" << endl;
	else cout << "sim" << endl;
    
    return 0;
}