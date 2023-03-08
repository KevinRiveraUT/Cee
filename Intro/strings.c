#include <stdio.h>
#include <stdlib.h>

int main() {
	char* greeting_p = "Hello";
    char greeting_a [] = "Henllo";

    printf("As pointer: %s\n", greeting_p);
    printf("As char array: %s\n", greeting_a);

    return 0;
}
