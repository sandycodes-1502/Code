#include <stdio.h>
#define PI 3.14159
int main() {
    int choice;
    float area, radius, length, width, base, height;
    printf("Choose shape to calculate area:\n1. Circle\n2. Rectangle\n3. Triangle\nEnter choice: ");
    scanf("%d", &choice);
    switch(choice) {
        case 1:
            printf("Enter radius: ");
            scanf("%f", &radius);
            area = PI * radius * radius;
            printf("Area of circle: %.2f\n", area);
            break;
        case 2:
            printf("Enter length and width: ");
            scanf("%f%f", &length, &width);
            area = length * width;
            printf("Area of rectangle: %.2f\n", area);
            break;
        case 3:
            printf("Enter base and height: ");
            scanf("%f%f", &base, &height);
            area = 0.5 * base * height;
            printf("Area of triangle: %.2f\n", area);
            break;
        default:
            printf("Invalid choice\n");
    }
    return 0;
}
