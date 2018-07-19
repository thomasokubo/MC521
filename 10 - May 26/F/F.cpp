#include<cstdio>
int main() {
	int A, C;
	int count;
	int aux, prev;
	char toggle;
	unsigned short alturas[10000];
	while(1) {
		scanf("%d %d", &A, &C);
		if(A == 0 && C == 0)
			break;
		count = 0;
		for(int i = 0; i < C; i++) {
			scanf(" %d", &aux);
			if(i != 0 && aux > prev) {
				count += aux-prev;
			}
			prev = aux;
		}
		count += A-aux;
		printf("%d\n", count);
	}

}