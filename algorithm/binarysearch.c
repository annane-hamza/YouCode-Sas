#include <stdio.h>

int main() {
    int arr[100];
    int key;
    int n;
    int pos;
    int lower, upper, mid;

    // size
    printf("size: ");
    scanf("%d", &n);

    // read
    for (int i = 0; i < n; i++) {
        printf("Value [%d]: ", i);
        scanf("%d", &arr[i]);
    }

    // key
    printf("enter key to be found: ");
    scanf("%d", &key);

    // binary search
    lower = 0;
    upper = n - 1;

    while (lower <= upper) {
        mid = (lower + upper) / 2;

        if (key == arr[mid]) {
            pos = mid;
            break;
        } else if (key > arr[mid]) {
            lower = mid + 1;
        } else {
            upper = mid - 1;
        }
    }

    if (pos == -1) {
        printf("The key %d not found\n", key);
    } else {
        printf("The key %d is found in pos %d\n", key, pos);
    }

    return 0;
}
