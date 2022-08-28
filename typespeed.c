#include <stdio.h>

int main() {
	char text[90] = "Write this down as fast as possible.";
	char answer[90];
	
	printf("%s\n\n", text);
	
	scanf("%s", answer);

	// compare text with answer and print how many errors it has.

	printf("%s", answer);
	
	return 0;
}
