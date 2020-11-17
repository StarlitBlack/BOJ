#include <stdio.h>
int fact(int i);

int main(){
	int n=10;
	scanf("%d", &n);

	printf("%d", fact(n));

    return 0;
}

int fact(int i){
	if(i<=1)	return 1;
	else return i*fact(i-1);
}
