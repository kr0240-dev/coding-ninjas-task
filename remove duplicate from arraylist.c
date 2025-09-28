#include <stdio.h>
int main() {
    int arr[100], n, i, j, count;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Array after removing duplicates:\n");
    for (i = 0; i < n; i++) {
        count = 0;

        for (j = 0; j < i; j++) {
            if (arr[i] == arr[j]) {
                count = 1;
                break;
            }
        }
      
        if (count == 0) {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");
    return 0;
}
