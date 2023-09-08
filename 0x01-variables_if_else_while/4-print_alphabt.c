#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - Prints the alphabet without q and e.
 *
 * Return: Always 0 (Success)
 */
int main() {
    char letter[] = "abcdfghijklmnoprstuvwxyz"; // Define the string of allowed letters
    int i;

    for (i = 0; i < 24; i++) {
        putchar(letter[i]);
    }

    putchar('\n');

    return 0;
}
