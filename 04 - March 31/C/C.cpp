#include <bits/stdc++.h>

using namespace std;

int gcd ( int A, int B )
{
    if(B == 0){return A;}
    if( A%B == 0){
        return B;
    } else {
        return gcd(B,A%B);
    }
}

int main(){

    int N,A,B,C,D;

    cin >> N;

    for(int i=0;i<N;i++){
        cin >> A >> B >> C >> D;
        int aux = gcd(abs(D-B),abs(C-A));
        aux++;

        cout << aux << '\n';;
    }

    return 0;
}