#include <stdio.h>
void reverseArray(int arr[], int n) {
    int i, temp;
    for(i = 0; i < n/2; i++) {
        temp = arr[i];
        arr[i] = arr[n-1-i];
        arr[n-1-i] = temp;
    }
}
int main() {
    int n;
    printf("Enter array size: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements:\n", n);
    for(int i=0; i<n; i++) scanf("%d", &arr[i]);
    reverseArray(arr, n);
    printf("Reversed array: ");
    for(int i=0; i<n; i++) printf("%d ", arr[i]);
    printf("\n");
    return 0;
}