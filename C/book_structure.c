#include <stdio.h>

struct Book {
    char title[50];
    char author[50];
    float price;
};

int main(){
    struct Book book1;
    printf("Enter book title: ");
    scanf(" %49[^\n]", book1.title);
    printf("Enter book author: ");
    scanf(" %49[^\n]", book1.author);

    printf("Enter book price: ");
    scanf("%f", &book1.price);

    printf("\n=====Book Details=====\n");
    printf("Title: %s\n", book1.title);
    printf("Author: %s\n", book1.author);
    printf("Price: $%.2f\n", book1.price);

    return 0;
}