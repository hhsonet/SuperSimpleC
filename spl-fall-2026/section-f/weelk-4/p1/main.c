#include <stdio.h>
int search(int arr[], int x, int n);
int main() {
    int n, arr[100], x, found = -1;

    printf("n:");
    scanf("%d", &n);

    printf("Insert the array:");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    printf("x");
    scanf("%d", &x);

    found = search(arr, x, n);
    if (search(arr, x, n) == -1) {
        printf("Not found");
    } else {
        printf("Found at %d", found);
    }
}

int search(int arr[], int x, int n) {

    int found = -1;
    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            found = i;
            return found;
        }
    }

    return found;
}
