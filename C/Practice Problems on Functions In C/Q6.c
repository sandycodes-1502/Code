#include <stdio.h>
int maxInt(int a, int b) {
    return (a > b) ? a : b;
}
float maxFloat(float a, float b) {
    return (a > b) ? a : b;
}
int main() {
    int i1, i2;
    float f1, f2;
    printf("Enter two integers: ");
    scanf("%d%d", &i1, &i2);
    printf("Max integer: %d\n", maxInt(i1, i2));
    printf("Enter two floats: ");
    scanf("%f%f", &f1, &f2);
    printf("Max float: %.2f\n", maxFloat(f1, f2));
    return 0;
}