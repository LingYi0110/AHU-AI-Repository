#include <stdio.h>

int main () {
	char c;
	while ((c = getchar() ) != 0) {
		if (c >= 'a' && c <= 'v')
			putchar (c + 4);
		else if (c >= 'A' && c <= 'V')
			putchar (c + 4);
		else if (c >= 'w' && c <= 'z')
			putchar (c - 22);
		else if (c >= 'W' && c <= 'Z')
			putchar  (c - 22);
		else
			putchar (c);
	}
}