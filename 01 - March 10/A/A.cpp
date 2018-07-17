#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <queue>
#include <stack>
#include <set>
#include <map>
#include <ctime>

using namespace std;

vector<char> rna;
vector<int> res;

int main() {

	string line;
	int i, count;

	// Enquanto a linha nao for vazia
	getline(cin, line);
	while(!line.empty()) {
		i=0;	// indice 
		count=0;
		rna.clear();
		rna.push_back(line[i]);
		for(i=1; i<line.size();i++){
			if(rna.size() > 0) {
				switch(rna.back()){
					case 'B':
						if(line[i] == 'S'){
							rna.pop_back();
							count++;		
						} else {
							rna.push_back(line[i]);
						}

						break;

					case 'S':
						if(line[i] == 'B'){
							rna.pop_back();
							count++;		
						} else {
							rna.push_back(line[i]);
						}
						break;
		
					case 'C':
						if(line[i] == 'F'){
							rna.pop_back();
							count++;		
						} else {
							rna.push_back(line[i]);
						}
						break;
	
					case 'F':
						if(line[i] == 'C'){
							rna.pop_back();
							count++;		
						} else {
							rna.push_back(line[i]);
						}
						break;
				}
			} else {
				rna.push_back(line[i]);
			}
		}

		res.push_back(count);
		line.clear();
		getline(cin, line);
		
	}

	for(i=0;i<res.size();i++) cout<< res[i] << endl;

    return 0;
}