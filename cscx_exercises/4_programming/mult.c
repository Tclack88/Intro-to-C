#include <stdio.h>

int mult(int a, int b, int c){
	return a*b*c;
}

int main(){
	int a, b, c;
	while(scanf("%d %d %d", &a, &b, &c) == 3){
		printf("%d\n", mult(a,b,c));
	}
	return 0;
}
