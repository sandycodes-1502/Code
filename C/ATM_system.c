#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Account
{
    int accNumber;
    char username[70];
    float balance;
    int pin;
};

void saveData(struct Account acc){
    FILE *file = fopen("atm_data.txt", "w");
    if (file == NULL)
    {
        printf("Error saving file.\n");
        return;
    }
    fprintf(file, "%d\n%s\n%.2f\n%d\n", acc.accNumber, acc.username, acc.balance, acc.pin);
    fclose(file);
}

int main(){
    struct Account acc;
    if(!loadAccount(&acc)) {
        printf("No existing accound found! Let's create one. \n");
        printf("Enter account number: ");
        getchar();
        printf("Enter name: ");
        fgets(acc.username, sizeof(acc.username), stdin);
        acc.username[strcspn(acc.username, "\n")] = '\0';
        printf("Enter pin: ");
        scanf("%d", &acc.pin);
        printf("Enter starting balance: ");
        scanf("%f", acc.balance);

        saveAccount(acc);
        printf("\nAccount created successfully!");
    }else {
        printf("Welcome back, %s!\n", acc.username);
        printf("Balance: Rs. %.2f\n", acc.balance);
    }
    int withdraw, choice;
menu: 
    printf("======MENU=======\n");
    printf("1. Check Balance\n");
    printf("2. Withdraw Money\n");
    printf("3. Exit\n");
    printf("Enter the choice: ");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        printf("%d is your balance.\n\n", acc.balance);
        goto menu;
    
    case 2:
        printf("Withdrawal amount should be multiple of 100.\n");
        printf("Enter the amount to withdraw: \n");
        scanf("%d", &withdraw);
        if (withdraw <= acc.balance && withdraw > 0)
        {
            if (withdraw % 100 == 0) {
                if (withdraw > 5000){
                    acc.balance = acc.balance - withdraw - 10;
                    printf("Since the amount of withdrawal is more than 5000, Extra Rs.10 fee is deducted. \n");
                    printf("The updated balance is %d\n\n", acc.balance);
                }else {
                    acc.balance = acc.balance - withdraw;
                    printf("The updated balance is %d\n\n", acc.balance);
                }
            
            }else {
                printf("Withdrawal amount should be multiple of 100.\n\n");
            }

        }else {
            printf("Insufficient balance or Invalid amount entered.\n\n");
        }
        goto menu;
    
    case 3:
        printf("Thank You\n");
        break;

    default:
        printf("Inavlid Response.\n\n");
        goto menu;
    }
}