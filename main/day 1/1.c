#include <stdio.h>

int main() {
    int n, pos, x;

    scanf("%d", &n);

    int arr[101];   // size n+1 to allow insertion

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &pos);
    scanf("%d", &x);

    // Invalid position check (DSA discipline)
    if (pos < 1 || pos > n + 1) {
        printf("Invalid position");
        return 0;
    }

    // Shift elements to the right
    for (int i = n; i >= pos; i--) {
        arr[i] = arr[i - 1];
    }

    // Insert element
    arr[pos - 1] = x;

    // Print updated array
    for (int i = 0; i <= n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
