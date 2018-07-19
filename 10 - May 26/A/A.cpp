#include<cstdio>
#include<stdlib.h>
int main() {
	int a, b, c, n;
	int aux;
	int count = 0;
	scanf("%d %d %d", &a, &b, &c);
	scanf("%d", &n);

	for(int i = 1; i <= n; i++) {
		scanf(" %d", &aux);
		if(aux > b && aux < c)
			count++;
	}
	printf("%d\n", count);
}