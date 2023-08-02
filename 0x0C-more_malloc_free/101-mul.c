#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
 * main - Check the code
 * @argc: number of arguments
 * @argv: arguments
 * Return: Nothing
 */

int is_number(char *str) {
    for (int i = 0; str[i]; i++) {
        if (!isdigit(str[i])) {
            return 0;
        }
    }
    return 1;
}

void multiply(char *num1, char *num2, char *result) {
    int len1 = strlen(num1);
    int len2 = strlen(num2);
    int carry = 0;
    int k = 0;
    for (int i = len1 - 1; i >= 0; i--) {
        carry = 0;
        k = len1 - 1 - i;
        for (int j = len2 - 1; j >= 0; j--, k++) {
            int product = (num1[i] - '0') * (num2[j] - '0') + carry + result[k];
            result[k] = product % 10;
            carry = product / 10;
        }
        while (carry) {
            result[k++] += carry % 10;
            carry /= 10;
        }
    }
    result[k] = '\0';
    for (int i = 0; i < k / 2; i++) {
        char temp = result[i] + '0';
        result[i] = result[k - i - 1] + '0';
        result[k - i - 1] = temp;
    }
}

int main(int argc, char **argv) {
    if (argc != 3) {
        printf("Error\n");
        exit(98);
    }
    
    if (!is_number(argv[1]) || !is_number(argv[2])) {
        printf("Error\n");
        exit(98);
    }
    
    int len1 = strlen(argv[1]);
    int len2 = strlen(argv[2]);
    
    char *result = malloc(len1 + len2 + 1);
    
    memset(result, 0, len1 + len2 + 1);
    
    multiply(argv[1], argv[2], result);
    
    printf("%s\n", result);
    
    free(result);
    
    return 0;
}

