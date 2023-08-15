#include <stdio.h>

int _putchar(char c) {
	    return putchar(c);
}

void print_alphabet(void) {
	    char letter = 'a';

	        while (letter <= 'z') {
			        _putchar(letter);
				        letter++;
					    }
		    _putchar('\n');
}

int main() {
	    print_alphabet();
	        return 0;
}


