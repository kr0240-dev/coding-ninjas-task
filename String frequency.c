#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    int i, j, count;
    int len;
    printf("Enter a string: ");
    scanf("%s", str); 
    len = strlen(str);
    printf("Character frequencies:\n");
    for (i = 0; i < len; i++) {

        int alreadyCounted = 0;
        for (j = 0; j < i; j++) {
            if (str[i] == str[j]) {
                alreadyCounted = 1;
                break;
            }
        }
        if (!alreadyCounted) {
            count = 1;
            for (j = i + 1; j < len; j++) {
                if (str[i] == str[j]) {
                    count++;
                }
            }
            printf("%c : %d\n", str[i], count);
        }
    }
    return 0;
}
