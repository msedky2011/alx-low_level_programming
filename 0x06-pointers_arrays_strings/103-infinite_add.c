#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* reverse_string(char* str) {
    int length = strlen(str);
    int i;
    char temp;
    for (i = 0; i < length / 2; i++) {
        temp = str[i];
        str[i] = str[length - i - 1];
        str[length - i - 1] = temp;
    }
    return str;
}

char* infinite_add(char* n1, char* n2, char* r, int size_r) {
    int carry = 0;
    int index = 0;
    int n1_length = strlen(n1);
    int n2_length = strlen(n2);
    int digit1=0;
    int digit2=0;
    int sum=0;
    int digit;
    while (n1_length > 0 || n2_length > 0 || carry > 0) {
        digit1 = (n1_length > 0) ? (n1[--n1_length] - '0') : 0;
        digit2 = (n2_length > 0) ? (n2[--n2_length] - '0') : 0;

        sum = digit1 + digit2 + carry;
        carry = sum / 10;
        digit = sum % 10;

        if (index >= size_r - 1)
            return 0;

        r[index++] = digit + '0';
    }

    r[index] = '\0';
    return reverse_string(r);
}
