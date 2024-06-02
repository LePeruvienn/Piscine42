#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>



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


void ft_print_comb2(void) {
	
	int a = 0;
	int b = 1;

	while (a != 100) {

		while (b != 100) {

			if (a != b) {
				
				ft_putnbr(a);

				ft_putchar(' ');
				
				ft_putnbr(b);
				ft_putchar(',');
				ft_putchar(' ');
				b++;
			}
			else {

				b++;
			}
		}
		a++;
		b = a + 1;
	}
}

int main () {

	ft_print_comb2();
	
	return 0;
}
