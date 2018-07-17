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

typedef pair<string, string> ss;
typedef vector< ss > vs;
vector<string> res;

int main() {

	int i, j, k, aux, achou;
	int n;
	string a, b, line;

	vector<vs> dic;
	dic.assign(26, vs());

	getline(cin, line);
	while(!line.empty()) {
		i=0;
		j=0;
		while(line[i] != ' '){
			a += line[i];
			i++;
		}
		for(i=i+1; i<line.size();i++) {
			b += line[i];
		}

		aux = b[0]-'0';
		aux = aux-97;
		dic[aux].push_back(make_pair(b,a));

		a.clear();	
		b.clear();
		line.clear();
		getline(cin, line);
	}

	getline(cin, line);
	while(!line.empty()){
		aux = line[0]-'0';
		aux = aux - 97;
		achou = 0;
		for(i=0; (!achou)&&(i<dic[aux].size());i++){
			if(!line.compare(dic[aux][i].first)) {
				res.push_back(dic[aux][i].second);

				achou = 1;
			}

		}

		if(!achou) res.push_back("eh");
		getline(cin, line);

	}
	for(i=0;i<res.size();i++){
		cout << res[i] << endl;
	}

    return 0;
}