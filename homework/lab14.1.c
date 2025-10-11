#include <stdio.h>

int main() {
    int arr[100];
    int count = 0;
    int num;

    printf("Enter value:\n");

    while (scanf("%d", &num) == 1) {
        arr[count++] = num;
        if (getchar() == '\n') break;
    }

    printf("Index: ");
    for (int i = 0; i < count; i++) {
        printf("%d ", i);
    }
    printf("\n");

    printf("Array: ");
    for (int i = 0; i < count; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    int min = arr[0], max = arr[0];
    for (int i = 1; i < count; i++) {
        if (arr[i] < min) min = arr[i];
        if (arr[i] > max) max = arr[i];
    }

    printf("\nMin : %d\n", min);
    printf("Max : %d\n", max);

    return 0;
}
