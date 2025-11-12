#include <stdio.h>

extern int globalVar = 10;

int main() {
    static int staticVar = 5;
    auto int autoVar = 3;        
    register int regVar = 2;   
    printf("Global Variable: %d\n", globalVar);
    printf("Static Variable: %d\n", staticVar);
    printf("Automatic Variable: %d\n", autoVar);
    printf("Register Variable: %d\n", regVar);

    return 0;
}