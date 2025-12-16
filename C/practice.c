// #include <stdio.h>

// void process_array(int data_val){
//     //Assume...
// }

// int main(){
//     int data[] = {5, 10, 15};
//     process_array(data);

//     printf("%d", data[0]);
//     return 0;
// }

//#include <stdio.h>

// int main(){
//     int arr[10];

//     printf("Enter arrray elements: ");
//     for (int i = 0; i < 10; i++)
//     {
//         printf("\nElement %d: ", i+1);
//         scanf("%d", &arr[i]);
//     }
//     int j = 9;
//     while( j <= 0 ){
//         printf ("%d ", arr[j]);
//         j--;
//     }    
//     return 0;
// }

// #include <stdio.h>

// int main(){
//     int odd = 0, even = 0;

//     int arr[5] = {1, 2 ,2, 4, 5};
//     for (int i = 0; i < 5; i++)
//     {
//         if(arr[i] % 2 == 0){
//             even += 1;
//         }else{
//             odd +=1;
//         }
//     }
//     printf("Odd: %d, Even: %d", odd, even);
    
//}

// #include <stdio.h>

// int main(){
//     char str[50] = "Madam";
//     int len =0;
//     int start, end, i;
//     int isPalindrome =1; 
//     for(i = 0; str[i] != '\0'; i++){
//         len++;
//     }
//     start = 0;
//     end = len -1;

//     while (start < end)
//     {
//         if (str[start] != str[end])
//         {
//             isPalindrome =0;
//             break;
//         }
//     start++;
//     end--;        
//     }
//     if(isPalindrome == 1){
//         printf("String is palindrome!\n");
//     }else{
//         printf("String isn't a palindrome!\n");
//     }
// }

// #include <stdio.h>

// int main(){
//     char str[100] = "dlroW olleH";
//     int len =0;
//     for(int i =0; str[i] != '\0'; i++){
//         len++;
//     }
//     for(int i=0; i < len; i++){
//         printf("%c", str[len - i -1]);
//     }
// }

// #include <stdio.h>

// int calcFibo(int num){
//     if(num ==0 || num == 1 || num < 0){
//         return 0;
//     }
//     return calcFibo(num -1) + calcFibo(num -2);
// }

// int calcFact(int num){
//     int fact;
//     if(num == 0 || num < 0){
//         return 0;
//     }else{
//     return num * calcFact(num -1);
//     }
// }

// int main(){
//     int num;
//     int fibonacci, factorial;
//     printf("Enter number: ");
//     scanf("%d", &num);

//     fibonacci = calcFibo(num);
//     factorial = calcFact(num);
//     printf("Factorial = %d", factorial);
//     printf("Fibonacci = %d", fibonacci);

// }

//================================
// #include <stdio.h>

// int calcFibo(int num) {
//     if (num < 0)
//         return 0;           // invalid case
//     if (num == 0)
//         return 0;
//     if (num == 1)
//         return 1;
//     return calcFibo(num - 1) + calcFibo(num - 2);
// }

// int calcFact(int num) {
//     if (num < 0)
//         return 0;           // invalid
//     if (num == 0)
//         return 1;           // 0! = 1
//     return num * calcFact(num - 1);
// }

// int main() {
//     int num;
//     printf("Enter number: ");
//     scanf("%d", &num);

//     int fibonacci = calcFibo(num);
//     int factorial = calcFact(num);

//     printf("Factorial = %d\n", factorial);
//     printf("Fibonacci = %d\n", fibonacci);

//     return 0;
// }

// #include <stdio.h>

// struct complex {
//     float real, imaginary;
// };

// int main(){
//     complex a, b, c;
//     scanf("%f %f", &a.real, &a.imaginary);
//     scanf("%f %f", &b.real, &b.imaginary);

//     c.real = a.real + b.real;
//     c.imaginary = a.imaginary + b.imaginary;
//     printf("\n %.2f + %.2fi", c.real, c.imaginary);
    
//     return 0;
// }

// #include <stdio.h>

// int main(){
//     int num[10] = {1, 2, 4, 67, 56, 34, 87, 2, 123, 23};
//     int max, min;
//     max = num[0];
//     min = num[0];

//     for(int i=0; i<10; i++){
//         if (max < num[i])
//         {
//             max = num[i];
//         }
//         if(min > num[i])
//         {
//             min = num[i];
//         }
//     }
//     printf("Maximum: %d\n", max);
//     printf("Minimum: %d\n", min);
// }

// #include <stdio.h>

// int calcFibo(int num){
//     if(num == 0){
//         return 0;
//     } else if(num == 1){
//         return 1;
//     } else{
//         return calcFibo(num-1) + calcFibo(num-2);
//     }
// }

// int main(){
//     int n, fibo;
//     printf("Enter a number: ");
//     scanf("%d", &n);
//     fibo = calcFibo(n);
//     printf("Fibonacci %d: %d\n", n, fibo);
// }

// #include <stdio.h>

// int factorial(int num){
//     int fact = 0;
//     if(num !=0 || num <0){
//         for(int i=1; i  num; i++){
//         fact *= i;
//         }
//     return fact;
//     }else{
//         return 0;
//     }
// }

// int main(){
//     int n, r;
//     printf("Enter nCr: \nn: ");
//     scanf("%d", &n);
//     printf("\nr:");
//     scanf("%d", &r);
//     if(n < r){
//         printf("Invalid nCr.");
//         return 0;
//     }
//     int ans, nfact, rfact, nrfact;
//     nfact = factorial(n);
//     rfact = factorial(r);
//     nrfact = factorial(n-r);
//     ans = nfact / (rfact * nrfact);
//     printf("%d C %d = %d", n, r, ans);
// }

#include <stdio.h>

int factorial(int num){
    if (num < 0)
        return 0;       // invalid
    
    if (num == 0)
        return 1;       // 0! = 1

    int fact = 1;
    for (int i = 1; i <= num; i++){
        fact *= i;
    }
    return fact;
}

int main(){
    int n, r;
    printf("Enter nCr: \nn: ");
    scanf("%d", &n);
    printf("\nr: ");
    scanf("%d", &r);

    if(n < r){
        printf("Invalid nCr.");
        return 0;
    }

    int nfact = factorial(n);
    int rfact = factorial(r);
    int nrfact = factorial(n - r);

    int ans = nfact / (rfact * nrfact);

    printf("%d C %d = %d", n, r, ans);

    return 0;
}
