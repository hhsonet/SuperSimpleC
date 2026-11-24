#include <stdio.h>
int search(int arr[], int x, int n);
int main() {
    int n, arr[100], x, position = -1;

    printf("n:");
    scanf("%d", &n);

    printf("Array:");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    printf("\nx");
    scanf("%d", &x);

    position = search(arr,x,n);

    if (position != -1) {
        printf("Found at %d", position);
    } else {
        printf("No found");
    }
}

int search(int arr[], int x, int n) {

    for (int i = 0; i < n; i++) {

        if (arr[i] == x) {

            return i;
        }
    }

    return -1;
}