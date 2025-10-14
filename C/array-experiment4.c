#include <stdio.h>

int main() {
    int sum=0, min=0, max=0, n;
    float avg;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements:\n");
    
    for (int i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);   
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    avg = (float)sum / n;
    for (int i = 0; i < n; i++)
    {
        max = arr[0];
        if (arr[i] > max)
        {
            max = arr[i];
        }
        else {
            max = max;
        }
    }
    for (int i = 0; i < n; i++)
    {
        min = arr[0];
        if (arr[i] < min)
        {
            min = arr[i];
        } else {
            min = min;
        }
    }
    printf("Sum: %d\n", sum);
    printf("Average: %.2f\n", avg);
    printf("Maximum: %d\n", max);
    printf("Minimum: %d\n", min);
    return 0;
}