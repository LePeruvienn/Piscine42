#include <unistd.h>
#include <stdio.h>

void ft_print_alphabet(void) {

	char l = 'a';

	while (l <= 'z') {
		write(1,&l,1);
		l++;
	}
}


int main() {

	ft_print_alphabet();
	
	return 0;
}
