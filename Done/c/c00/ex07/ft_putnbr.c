#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>



void ft_putchar (char c) {
	
	write (1,&c,1);
}

void ft_putnbr(int nb) {

	int n = 0;
	
	int a = nb;

	while (1) {

		if ( a == 0) {
			return;
		}

		while (a > 10) {
			
			n++;

			int b = a%10;

			a = a - b;

			a = a/10;
		}

		if(a == 10) {
			ft_putchar(1 + '0');
		}
		else {
			ft_putchar(a + '0');
		}

		for (int i = 0; i < n; i++) {
			
			a = a * 10;  
		}

		int c = a;

		a = nb - a;

		if(a < c/10){
			ft_putchar('0');
		}

		nb = a;

		n = 0;	
	}
}


int main () {
	
	ft_putnbr(103040405);
			
	return 0;
}
