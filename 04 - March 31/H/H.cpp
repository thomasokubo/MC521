#include<bits/stdc++.h>
using namespace std;

int main(){
	double l, w, h, teta;
	double area, grau,v;
	while(cin >> l >> w >> h >> teta){
		if( teta <= (((double)180.0/M_PI)*atan(h/l))){
			area = ((l*l * tan(teta * (double)M_PI/180.0))/2);
			v = (double)(l*h - area)*w;
		} else {
			area = (h*h * tan( (90-teta) * (double)M_PI/180.0))/2;
			v = (double)(area)*w;
		}

		cout << setprecision(3) << fixed<< v << " mL" << endl;
	}
    
	return 0;
}
