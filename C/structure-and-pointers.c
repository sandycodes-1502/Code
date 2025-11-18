#include <stdio.h>

struct  Book
{
    char name[50];
    char author[50];
    float price;
};

int main(){
    struct Book b1;
    struct Book *ptr;


    ptr = &b1;

    printf("Enter author name: ");
    fgets(ptr->author, sizeof(ptr->author), stdin);
    printf("Enter book name: ");
    fgets(ptr->name, sizeof(ptr->name), stdin);
    printf("Enter price: ");
    scanf("%.2f", &ptr->price);

    printf("\n===Book Details===\n");
    printf("Author: %s", ptr->author);
    printf("Book Name: %s", ptr->name);
    printf("Price: %.2f\n", ptr->price);
    
}


