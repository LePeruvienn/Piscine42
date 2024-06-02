#include <unistd.h>
#include <stdio.h>

void ft_print_reverse_alphabet(void) {

	char l = 'z';

	while (l >= 'a') {
		write(1,&l, 1);
		l--;
	}
}


int main() {

	ft_print_reverse_alphabet();
	
	return 0;
}
