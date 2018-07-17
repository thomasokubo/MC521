#include <bits/stdc++.h>

using namespace std;

const unsigned  long int N_MAX = 4294967295; /* maior número inteiro 32 bits*/

unsigned long int vet[22];

int main(){

    int N;

    vet[0] = 1;
    vet[1] = 1;
    vet[2] = 2;
    vet[3] = 5;
    int i=4;
    for(i=4;i<22;i++){
        vet[i] = 0;
        for(int j=0;j<i;j++){
            vet[i] += vet[i-1-j]*vet[j];
        }
        //vet[i] = vet[i]/2;
        //cout << "i: " << i << " : " << vet[i] << '\n';
    }
    while( cin >> N ){
        int aux = -1;
        for(int j=0;j<22;j++){
            if( vet[j] == N){
                aux = j;
            }
        }
        cout << aux << '\n';
    }

    return 0;
}