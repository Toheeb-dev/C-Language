#include <stdio.h>
#include <string.h>

int main() {
char str_a[20];
char *pointer;
char *pointer2;

strcpy(str_a, "Hello, world!\n");
pointer = str_a; // Set the first pointer to the start of the array.

printf(pointer);

pointer2 = pointer + 2; // Set the second one 2 bytes further in.
printf(pointer2);
strcpy(pointer2, "y you guys!\n"); // Copy into that spot.
printf(pointer);
// Print again.
//printf(pointer2);
}
