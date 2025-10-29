#include <stdio.h>
int main() {
    int choice;
    float value;
    printf("Choose conversion:\n1. cm to m\n2. m to km\nEnter choice: ");
    scanf("%d", &choice);
    printf("Enter value: ");
    scanf("%f", &value);
    switch(choice) {
        case 1: printf("%.2f cm = %.2f m\n", value, value/100); break;
        case 2: printf("%.2f m = %.2f km\n", value, value/1000); break;
        default: printf("Invalid choice\n");
    }
    return 0;
}
