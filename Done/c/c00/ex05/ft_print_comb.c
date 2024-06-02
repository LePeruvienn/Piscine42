#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>



void ft_putchar (char c) {
	
	write (1,&c,1);
}

void ft_print_comb(void) {
	
	int yy = 0;

	int zz = 0;
	int zzz = 0;

	for (int i = 0; i < 10; i++) {
		for (int y = yy; y < 10; y++) {
			
			for (int z = zz; z < 10; z++) {
				ft_putchar(i + '0');
				ft_putchar(y + '0');
				ft_putchar(z + '0');
		
				ft_putchar(',');
				ft_putchar(' ');
			}
			zz++;
		}
		zzz++;
		zz = zzz;
		yy++;
	}

}

int main () {

	ft_print_comb();
	
	return 0;
}
