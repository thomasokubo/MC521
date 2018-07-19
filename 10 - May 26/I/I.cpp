#include<cstdio>
#include<cmath>
int n, l, d;
inline double abs(double x) {
	return x > 0 ? x : -x;
}
inline double maxtetal(int alturas[], int n, int jard) {
	double x, y, teta;
	double maximum = 0;
	for(int i = jard-1; i >= 0; i--) {
		x = (jard-i)*d+(jard-i)*l;
		teta = atan(alturas[i]/x);
		if(teta > maximum)
			maximum = teta;
	}
	return maximum;
}

inline double maxtetar(int alturas[], int n, int jard) {
	double x, y, teta;
	double maximum = 0;
	for(int i = jard+1; i < n; i++) {
		x = (i-jard)*d+(i-jard)*l;
		teta = atan(alturas[i]/x);
		if(teta > maximum)
			maximum = teta;
	}
	return maximum;
}

int main() {
	int alturas[100];
	int jard;
	double tetal, tetar;
	while(scanf("%d %d %d ", &n, &l, &d) != EOF) {
		for(int i = 0; i < n; i++) {
			scanf(" %d", &alturas[i]);
			if(alturas[i] == 0)
				jard = i;
		}
		tetal = abs(maxtetal(alturas, n, jard));
		tetar = abs(maxtetar(alturas, n, jard));
		printf("%.2lf\n", (960*(M_PI-tetal-tetar))/M_PI);
	}

}