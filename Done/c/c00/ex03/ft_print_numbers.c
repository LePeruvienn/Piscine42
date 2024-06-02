#include <unistd.h>
#include <stdio.h>


void ft_putchar(char c) {
	
	write(1,&c,1);
}

void ft_print_numbers(void) {

	int n = 0;

	while (n < 10) {
		ft_putchar(n + '0'); // Ici on ajoute à notre nombre le code ASCII de 0, pour pouvoir donc obtenir sont équivalent ASCII !
		n++;
	}
}


int main() {
	
	ft_print_numbers();

	return 0;
}
