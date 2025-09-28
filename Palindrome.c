#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    int i, j;
    printf("Enter a string: ");
    scanf("%s", str); 
    i = 0;
    j = strlen(str) - 1;
    while (i < j) {
        if (str[i] != str[j]) {
            printf("%s is NOT a Palindrome.\n", str);
            return 0;
        }
        i++;
        j--;
    }
    printf("%s is a Palindrome.\n", str);
    return 0;
}
