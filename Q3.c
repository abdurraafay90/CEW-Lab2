#include <stdio.h>

int main() {
    char str1[100], str2[100];

    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    int len1 = 0, len2 = 0;
    while (str1[len1] != '\0') {
        len1++;
    }

    while (str2[len2] != '\0') {
        len2++;
    }

    if (len1 == len2) {
        printf("Both strings have the same length.\n");
    } else if (len1 > len2) {
        printf("String 1 is longer than String 2.\n");
    } else {
        printf("String 2 is longer than String 1.\n");
    }

    return 0;
}