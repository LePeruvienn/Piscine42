#include <stdio.h>


void ft_div_mod(int a, int b, int *div, int *mod) {
	
	int c = a/b;

	*div = c;
	*mod = 0;
}

int main() {
	
	int *div;
	int *mod;

	ft_div_mod(6,4,div,mod);

	printf("div:%d\nmod:%d",div,mod);
	
	return 0;
}
