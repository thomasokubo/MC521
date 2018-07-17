#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <queue>
#include <iomanip>

using namespace std;


vector< vector<char> > maze;
vector<string> path;
vector<int> contador;


int main() {

    char aux;
    int i, j, k, l;
    int cases, m, n;
    int x,y, a,b;
    string key = "IEHOVA#";

    cin >> cases;
    for(l=0;l<cases;l++) {

        cin >> m >> n;
        maze.resize(m);       

        for(i=0;i<m;i++){
            for(j=0;j<n;j++) {   
                cin >> aux;   
                if(aux == '@'){
                    x = i;
                    y = j;
                }
                maze[i].push_back(aux);
            }
        }


        for(i=0;i<key.size();i++) {
            if(maze[x][y-1] == key[i]){
                path.push_back("left");
                y--;
            } else if(maze[x][y+1] == key[i]){		
                path.push_back("right");
                y++;
            } else {
                path.push_back("forth");
                x--;
			}

        }

		maze.clear();
    }

    k=0;
    for(i=0;i<cases;i++) {
        cout << path[k];
        k++;
        for(j=1;j<7;j++){
            cout << " " << path[k];
            k++;
        }
        cout << endl;
    }

    return 0;
}

