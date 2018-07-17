#include <iostream>
#include <vector>
#include <algorithm>
#include <string.h>
#include <queue>
#include <stack>
#include <set>
#include <map>
#include <ctime>
#include <stdlib.h>

using namespace std;

vector< pair<int,int> > soldier;
vector<int> alive;
vector<int> death;

int main(){


    int i, j,aux, count=0;
    int s, b, l, r;
   

	// le o numero de soldados e o numeros de mortes
    cin >> s >> b;
    while((s)&&(b)) {
		count++;
		death.push_back(b);
	
		soldier.push_back(make_pair(0,0));
		for(i=1;i<s;i++) soldier.push_back(make_pair(i-1,i+1));
		soldier.push_back(make_pair(i-1,0));

		// le b linhas de mortes, cada uma contendo o intervalo de mortos
        for(i=0;i<b;i++) {
            cin >> l>> r;
			alive.push_back(soldier[l].first);
			alive.push_back(soldier[r].second);
			soldier[soldier[l].first].second = soldier[r].second; 
			soldier[soldier[r].second].first = soldier[l].first;
        }
   		
		soldier.clear();
        cin >> s>> b;
    }


	// Imprime o resultado
    s = 0;
    for(i=0;i<count; i++) {		    // cada case
        for(j=0;j<death[i];j++) {	// cada case tem b mortes
            if(alive[s*2]) cout << alive[s*2];
            else cout << "*";
   
            cout << " ";
               
            if(alive[s*2+1]) cout << alive[s*2+1] << endl;
            else cout << "*" << endl;
   
            s++;
        }
        cout << "-" << endl;
    }
    return 0;
}
