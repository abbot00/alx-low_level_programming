#include <stdio.h>
#include <stdlib.h>

/*
 * print_opcodes - Prints the opcodes of the main function.
 * num_bytes: Number of bytes to print from the main function.
 */
void print_opcodes(int num_bytes) {
    if (num_bytes < 0) {
        printf("Error\n");
        exit(2);
    }

    /* Obtain the address of the main function as a pointer to unsigned char. */
    unsigned char *main_ptr = (unsigned char *)print_opcodes;
    
    /* Loop through the specified number of bytes and print the opcodes. */
    int i;
    for (i = 0; i < num_bytes; i++) {
        printf("%02x ", main_ptr[i]);
    }
    printf("\n");
}

/*
 * main - Entry point of the program.
 * argc: Number of command-line arguments.
 * argv: Array of pointers to the command-line arguments.
 *
 * Return: 0 if successful, 1 if incorrect number of arguments, and 2 if negative number of bytes.
 */
int main(int argc, char *argv[]) {
    int num_bytes;

    if (argc != 2) {
        printf("Error\n");
        return 1;
    }

    /* Convert the argument to an integer. */
    num_bytes = atoi(argv[1]);

    /* Print the opcodes of the main function. */
    print_opcodes(num_bytes);

    return 0;
}
