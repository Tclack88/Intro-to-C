#include <stdio.h>

int mult(int a, int b, int c){
	return a*b*c;
}

int main(){
	int a;
	int b;
	int c;
	scanf("%d %d %d", &a, &b, &c);
	printf("%d\n", mult(a,b,c));
	return 0;
}
