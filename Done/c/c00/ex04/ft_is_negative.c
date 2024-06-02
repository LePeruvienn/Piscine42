#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>


void ft_putchar(char c) {
	
	write(1,&c,1);
}

void ft_is_negative(int n){

	char c;

	if (n >= 0) {
		c = 'P';
	}
	else {
		c = 'N';
	}

	ft_putchar(c);

}

int main(int argc, char *argv[]) {
	
	int num = 0;

	if (argc > 1) {
		num = atoi(argv[1]);
	}

	ft_is_negative(num);

	return 0;
}
