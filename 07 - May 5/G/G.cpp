#include <bits/stdc++.h>
using namespace std;

int main() {

	int i,j,k,flag;
	char tau1, tau2;
	bool word;

	string line;
	getline(cin, line);	
	while(line != "*"){	
		tau1 = line[0];
		if(tau1>96) tau2 = tau1 - 32;
		else tau2 = tau1 + 32; 
		word = false;
		flag=0;
		for(i=1;i<line.size() && !flag;i++) {
			if(line[i] == ' ') {
				word = true; // indica fim de uma palavra
			} else {
				if(word) {	
					if(line[i] == tau1 || line[i] == tau2)
						word = false;
					else
						flag = 1;			
				}
			}


		}
		if(!flag) cout << "Y" << endl;
		else cout << "N" << endl;


		line.clear();
		getline(cin,line);
	}

    return 0;
}